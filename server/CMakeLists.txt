AUX_SOURCE_DIRECTORY(. server_Src)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/core)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/log)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/util)

find_library(JEMALLOC_LIB libjemalloc.so /usr/local/lib)
IF (NOT JEMALLOC_LIB)
    MESSAGE(FATAL_ERROR "libjemalloc not found")
ENDIF(NOT JEMALLOC_LIB)

SET(JEMALLOC_INCLUDE_DIR /usr/include/jemalloc)
SET(JEMALLOC_LIB /usr/local/lib)

INCLUDE_DIRECTORIES(${JEMALLOC_INCLUDE_DIR})
LINK_DIRECTORIES(${JEMALLOC_LIB})

ADD_LIBRARY(server ${server_Src})

TARGET_LINK_LIBRARIES(server core)
TARGET_LINK_LIBRARIES(server log)
TARGET_LINK_LIBRARIES(server util)


#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -g")
#set(REDIS_SRC ./redis_network/ae.c ./redis_network/anet.c ./redis_network/zmalloc.c)
#
#find_library(JEMALLOC_LIB libjemalloc.so /usr/local/lib)
#IF (NOT JEMALLOC_LIB)
#    MESSAGE(FATAL_ERROR "libjemalloc not found")
#ENDIF(NOT JEMALLOC_LIB)
#
#SET(JEMALLOC_INCLUDE_DIR /usr/include/jemalloc)
#SET(JEMALLOC_LIB /usr/local/lib)
#
#INCLUDE_DIRECTORIES(./redis_network) #https://github.com/antirez/redis
#INCLUDE_DIRECTORIES(${JEMALLOC_INCLUDE_DIR})
#
#LINK_DIRECTORIES(${JEMALLOC_LIB})

#ADD_EXECUTABLE必须在TARGET_LINK_LIBRARIES前面，否则会报错
#ADD_EXECUTABLE(${PROJECT_NAME} example_firecat.c buffer.c ${REDIS_SRC})
#TARGET_LINK_LIBRARIES(${PROJECT_NAME} jemalloc)