# 指定使用cmake版本最低是3.10
cmake_minimum_required(VERSION 3.10)

SET(CMAKE_C_STANDARD 99)

AUX_SOURCE_DIRECTORY(. core_Src)
AUX_SOURCE_DIRECTORY(./redis_network redis_network_Src)

SET(JEMALLOC_INCLUDE_DIR /usr/include/jemalloc)
SET(JEMALLOC_LIB /usr/local/lib)

INCLUDE_DIRECTORIES(${JEMALLOC_INCLUDE_DIR})

LINK_DIRECTORIES(${JEMALLOC_LIB})

ADD_LIBRARY(core ${core_Src} ${redis_network_Src})

TARGET_LINK_LIBRARIES(core jemalloc)

#INCLUDE_DIRECTORIES(redis_network)

#TARGET_LINK_LIBRARIES(core network)



