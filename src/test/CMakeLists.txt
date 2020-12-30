# # 查找 GTest 库
# find_package(GTest REQUIRED)
# # GTest 的头文件
# include_directories(${GTEST_INCLUDE_DIRS})

CollectSourceFiles(
        ${CMAKE_CURRENT_SOURCE_DIR}
        PRIVATE_SOURCES
        # Exclude
        ${CMAKE_CURRENT_SOURCE_DIR}/PrecompiledHeaders)

if(USE_COREPCH)
    set(PRIVATE_PCH_HEADER PrecompiledHeaders/testPCH.h)
endif()

GroupSources(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(unittest ${PRIVATE_SOURCES})

# # 链接测试库
target_link_libraries(unittest
  PRIVATE
    rendu-core-interface
  PUBLIC
    gtest
    common
    )

CollectIncludeDirectories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  PUBLIC_INCLUDES
  # Exclude
  ${CMAKE_CURRENT_SOURCE_DIR}/PrecompiledHeaders)
    
target_include_directories(unittest
  PUBLIC
    ${PUBLIC_INCLUDES}
  PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR})

set_target_properties(unittest
    PROPERTIES
      FOLDER
        "test")

if(USE_COREPCH)
    add_cxx_pch(common ${PRIVATE_PCH_HEADER})
endif()
# install(TARGETS unittest DESTINATION bin)        
# # 添加到测试
# gtest_discover_tests(test_my_class)