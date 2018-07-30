# 指定使用cmake版本最低是3.10
cmake_minimum_required(VERSION 3.10)
#add_definitions(-DOS_MACOSX)
add_definitions(-DOS_LINUX)

# 项目名
project(server_.luster)



# 引入子目录
ADD_SUBDIRECTORY(util)
ADD_SUBDIRECTORY(log)
ADD_SUBDIRECTORY(core)
ADD_SUBDIRECTORY(gate)
ADD_SUBDIRECTORY(global)
ADD_SUBDIRECTORY(server)
ADD_SUBDIRECTORY(client)

ADD_SUBDIRECTORY(my_test)

#set(CMAKE_CXX_STANDARD 11)
#set(SOURCE_FILES main.cpp)
#add_executable(server_cluster main.cpp)

## 第三方库位置可以通过命令pkg-config --cflags --libs opencv查看
#target_link_libraries(server_cluster -I/include -L/lib -lpthread )

#动态库
#add_library(hello SHARED ${SOURCE_FILES})
#静态库
#add_library(net ${SOURCE_FILES})

