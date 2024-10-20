# 手动列出所有的 .c 源文件
set(SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/qrcodegen.c
)

# 添加库
add_library(qrcode_lib SHARED ${SRC})

# 添加包含目录
target_include_directories(qrcode_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
