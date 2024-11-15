cmake_minimum_required(VERSION 3.10)

project(Vannie VERSION 1.0)

# include_directories(include)

file(GLOB_RECURSE SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Source/*.cpp")
file(GLOB_RECURSE HEADER_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/Source/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/Source/*.hpp")

# 为源代码文件设置源组，以便在 IDE 中按目录显示
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/Source FILES ${SRC_FILES} ${HEADER_FILES})

add_library(Vannie SHARED ${SRC_FILES} ${HEADER_FILES})

set_target_properties(Vannie PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 如果需要链接其他库，可以使用 target_link_libraries
# 例如：target_link_libraries(my_shared_library another_library)

# 安装库文件（可选）
install(TARGETS Vannie LIBRARY DESTINATION lib)