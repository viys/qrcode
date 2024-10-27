set(SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/qrcodegen.c
)

# 添加静态库
add_library(qrcode_lib_static STATIC ${SRC})

# 添加包含目录
target_include_directories(qrcode_lib_static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 创建接口库
add_library(qrcode_lib INTERFACE)

# 将静态库作为依赖
target_link_libraries(qrcode_lib INTERFACE qrcode_lib_static)