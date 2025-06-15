# 创建模块库
add_library(CoordModule)

# 添加模块文件
target_sources(CoordModule
    PUBLIC
        FILE_SET all_my_modules TYPE CXX_MODULES
        BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
        FILES CoordXy.ixx
)

# 设置模块属性
set_property(TARGET CoordModule PROPERTY CXX_SCAN_FOR_MODULES ON)