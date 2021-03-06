#include "CRabbitMq.h"
#include "utils.h"
#include "utils.c"
#include <amqp_tcp_socket.h>

CRabbitMq::CRabbitMq(QObject *parent) : QObject(parent)
{

}

int CRabbitMq::init(int argc, char *argv[])
{
    char const *hostname;
    int port, status;
    char const *exchange;
    amqp_socket_t *socket = NULL;
    amqp_connection_state_t conn;

    amqp_bytes_t queuename;

    if (argc < 5) {
      fprintf(stderr, "Usage: amqp_listen host port exchange bindingkey\n");
      return 1;
    }

    hostname = argv[1];
    port = atoi(argv[2]);
    exchange = argv[3];

    QString sName;
    if(argc>5)
        sName=argv[5];


    conn = amqp_new_connection();

    socket = amqp_tcp_socket_new(conn);
    if (!socket) {
      die("creating TCP socket");
    }

    status = amqp_socket_open(socket, hostname, port);
    if (status) {
      die("opening TCP socket");
    }

    die_on_amqp_error(amqp_login(conn, "tw", 0, 16384, 60, AMQP_SASL_METHOD_PLAIN,"user1", "user1.stock"),"Logging in");
    amqp_channel_open(conn, 1);
    die_on_amqp_error(amqp_get_rpc_reply(conn), "Opening channel");

    {
      amqp_queue_declare_ok_t *r = amqp_queue_declare(conn, 1, amqp_empty_bytes, 0, 0, 0, 1,
                                   amqp_empty_table);
      die_on_amqp_error(amqp_get_rpc_reply(conn), "Declaring queue");
      queuename = amqp_bytes_malloc_dup(r->queue);
      if (queuename.bytes == NULL) {
        fprintf(stderr, "Out of memory while copying queue name");
        return 1;
      }
    }

    {
      int i;
      for (i = 4; i < argc; i++) {
        char const *bindingkey = argv[i];
        amqp_queue_bind(conn, 1, queuename, amqp_cstring_bytes(exchange), amqp_cstring_bytes(bindingkey),
                        amqp_empty_table);
        die_on_amqp_error(amqp_get_rpc_reply(conn), "Binding queue");
      }
    }

    amqp_basic_consume(conn, 1, queuename, amqp_empty_bytes, 0, 1, 0, amqp_empty_table);
    die_on_amqp_error(amqp_get_rpc_reply(conn), "Consuming");

    {
      for (;;) {
        amqp_rpc_reply_t res;
        amqp_envelope_t envelope;

        amqp_maybe_release_buffers(conn);

        res = amqp_consume_message(conn, &envelope, NULL, 0);

        if (AMQP_RESPONSE_NORMAL != res.reply_type) {
          break;
        }

  /* ------------------------------------------------------------------ */
  /* 請將主要處理程式碼放在這個區塊, 以下只是範例, 將收到資料列印出來 */

  /* *-/
        printf("Delivery %u, exchange %.*s routingkey %.*s\n",
               (unsigned) envelope.delivery_tag,
               (int) envelope.exchange.len, (char *) envelope.exchange.bytes,
               (int) envelope.routing_key.len, (char *) envelope.routing_key.bytes);

        if (envelope.message.properties._flags & AMQP_BASIC_CONTENT_TYPE_FLAG) {
          printf("Content-type: %.*s\n",
                 (int) envelope.message.properties.content_type.len,
                 (char *) envelope.message.properties.content_type.bytes);
        }
        printf("----\n");

        amqp_dump(envelope.message.body.bytes, envelope.message.body.len);
  //--*/

      //  printf("%.*s\n", (int)envelope.message.body.len, (char *)envelope.message.body.bytes);
        QString st((char *)envelope.message.body.bytes);
        QByteArray input;
        input.append(st);
        QByteArray output;
        M5Lib().ipc()->connectHost("M5",input,output,200);

        fflush(stdout);

  /* *-/
        if ((unsigned) envelope.delivery_tag % 1000 == 0) {
          fprintf(stderr, "Got %u messages\n", envelope.delivery_tag);
        }
  //--*/

  /* ------------------------------------------------------------------ */

        amqp_destroy_envelope(&envelope);
      }
    }

    die_on_amqp_error(amqp_channel_close(conn, 1, AMQP_REPLY_SUCCESS), "Closing channel");
    die_on_amqp_error(amqp_connection_close(conn, AMQP_REPLY_SUCCESS), "Closing connection");
    die_on_error(amqp_destroy_connection(conn), "Ending connection");

    return 0;
}
