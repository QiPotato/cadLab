# 自动下载 GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.17.0
)
FetchContent_MakeAvailable(googletest)

# 创建测试可执行文件
add_executable(
    test_MyClass
    test_MyClass.cpp
)

# 链接 GoogleTest 和主项目模块
target_link_libraries(
    test_MyClass
    PRIVATE 
        gtest_main
        CoordModule  # 链接我们的类模块
)

# 设置 C++20 标准
set_target_properties(test_MyClass PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)

# 注册测试
add_test(
    NAME MyClassTests
    COMMAND test_MyClass
)