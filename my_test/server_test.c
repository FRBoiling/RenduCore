#include <iostream>
#include <server.h>


int main() {
    Server* server = new Server();
    server->bind(8201);
    server->run();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}