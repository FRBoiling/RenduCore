//
// Created by boil on 18-7-23.
//

#ifndef ISOCKETSERVER_H
#define ISOCKETSERVER_H

class ISocketServer{
public:
    virtual void bind(int port)=0;
    virtual void shutdownGracefully()=0;
    virtual void run()=0;
};


#endif //ISOCKETSERVER_H
