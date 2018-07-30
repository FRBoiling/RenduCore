#The network library from redis v4.0.10 -- https://github.com/antirez/redis
#No changes were made.
#/redis/src/ae.c
#/redis/src/ae.h
#/redis/src/ae_epoll.c
#/redis/src/ae_evport.c
#/redis/src/ae_kqueue.c
#/redis/src/ae_select.c
#/redis/src/anet.c
#/redis/src/anet.h
#/redis/src/atomicvar.h
#/redis/src/config.h
#/redis/src/fmacros.h
#/redis/src/zmalloc.c
#/redis/src/zmalloc.h

cmake_minimum_required(VERSION 3.10)

SET(CMAKE_C_STANDARD 99)

ADD_DEFINITIONS(-DUSE_JEMALLOC)

AUX_SOURCE_DIRECTORY(. network_Src)



#ADD_LIBRARY(network_shared SHARED ${network_Src})
#ADD_LIBRARY(network_static STATIC ${network_Src})

#SET_TARGET_PROPERTIES(network_shared PROPERTIES OUTPUT_NAME "network")
#SET_TARGET_PROPERTIES(network_static PROPERTIES OUTPUT_NAME "network")

SET(JEMALLOC_INCLUDE_DIR /usr/include/jemalloc)
SET(JEMALLOC_LIB /usr/local/lib)

INCLUDE_DIRECTORIES(${JEMALLOC_INCLUDE_DIR})

LINK_DIRECTORIES(${JEMALLOC_LIB})

ADD_LIBRARY(network ${network_Src})

TARGET_LINK_LIBRARIES(network jemalloc)
