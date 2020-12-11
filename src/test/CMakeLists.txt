# # 查找 GTest 库
# find_package(GTest REQUIRED)
# # GTest 的头文件
# include_directories(${GTEST_INCLUDE_DIRS})

CollectSourceFiles(
  ${CMAKE_CURRENT_SOURCE_DIR}
  PRIVATE_SOURCES
)

GroupSources(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(uinttest ${PRIVATE_SOURCES})

# # 链接测试库
target_link_libraries(uinttest
  PRIVATE
    rendu-core-interface
  PUBLIC
    gtest)

CollectIncludeDirectories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  PUBLIC_INCLUDES
  # Exclude
  ${CMAKE_CURRENT_SOURCE_DIR}/PrecompiledHeaders)
    
target_include_directories(uinttest
  PUBLIC
    ${PUBLIC_INCLUDES}
  PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR})

set_target_properties(uinttest
    PROPERTIES
      FOLDER
        "test")


# install(TARGETS uinttest DESTINATION bin)        
# # 添加到测试
# gtest_discover_tests(test_my_class)