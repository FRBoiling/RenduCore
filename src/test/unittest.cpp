#include "gtest/gtest.h"
#include <iostream>
#include "Log.h"

int test_fun(int a) {
    return a + 1;
}

// 单元测试
TEST(FunTest, HandlesZeroInput) {
  EXPECT_EQ(1, test_fun(0));
}

TEST(LogTest,ConsoleLog){
    LOG_INFO("server.loading", "Loading IP Location Database...");
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
