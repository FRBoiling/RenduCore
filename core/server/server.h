//
// Created by boil on 18-7-23.
//

#ifndef SERVERCLUSTER_SERVER_H
#define SERVERCLUSTER_SERVER_H


#include <cstdint>
#include "i_socket_server.h"

extern "C" {
#include <redis_network/anet.h>
#include <redis_network/ae.h>
#include <buffer.h>
#include <protocol.h>
}

typedef struct {
    aeEventLoop *event_loop;
    int listen_fd;
    int port;
    int tcp_backlog;
    int max_client_count;
    int cur_client_count;
    char err_info[ANET_ERR_LEN];
} server_t;

typedef struct {
    aeEventLoop *event_loop;
    int fd;
    int timerId;
    uint64_t last_recv_tick;
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
    server_t server_;

    static void acceptTcpHandler(aeEventLoop *loop, int fd, void *data, int mask);
    static void readEventHandler(aeEventLoop *loop, int fd, void *data, int mask);
    static client_t *alloc_client();

};


#endif //SERVERCLUSTER_SERVER_H
