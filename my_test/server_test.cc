#include <server.h>

//
// Created by boil on 18-7-30.
//
int main() {
   Server * server = new Server();
   server->bind(8201);
   server->run();
   server->shutdownGracefully();
}