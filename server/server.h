//
// Created by boil on 18-7-23.
//

#ifndef SERVERCLUSTER_SERVER_H
#define SERVERCLUSTER_SERVER_H


#include "i_socket_server.h"

extern "C" {
#include <network/anet.h>
#include <network/ae.h>
#include <malloc/zmalloc.h>
#include <protocol.h>
#include <buffer.h>
}

typedef struct {
    aeEventLoop *event_loop;
    int listen_fd;
    int port;
    int backlog;
    int max_client_count;
    char err_info[ANET_ERR_LEN];
} server_t;

typedef struct {
    aeEventLoop *event_loop;
    int fd;
    buffer_t *read_buffer;
    buffer_t *write_buffer;
} client_t;

class Server : public ISocketServer {
public:
    Server();

    ~Server();

public:
    void bind(int port) override;
    void shutdownGracefully() override;
    void run();
private:
    server_t *server_;

    void acceptTcpHandler(aeEventLoop *loop, int fd, void *data, int mask);
    void readEventHandler(aeEventLoop *loop, int fd, void *data, int mask);
    client_t *alloc_client();

};


#endif //SERVERCLUSTER_SERVER_H
