# 引入库
INCLUDE_DIRECTORIES(/usr/include)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/core)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/server)

AUX_SOURCE_DIRECTORY(. my_test_SRC)

# 生成可执行的target
ADD_EXECUTABLE(my_test ${my_test_SRC} client_test.cc)
# 链接库
TARGET_LINK_LIBRARIES(my_test core)
TARGET_LINK_LIBRARIES(my_test server_lib)


