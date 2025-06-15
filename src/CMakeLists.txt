cmake_minimum_required(VERSION 3.30)
project(MyCadLib VERSION 1.0)

set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "" FORCE)

# 设置 C++20 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 启用模块支持
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

# 添加可执行文件
add_subdirectory(math)

# 启用测试 (需在add_subdirectory(tests)之前)
enable_testing()

# 包含GoogleTest并添加测试
add_subdirectory(tests)