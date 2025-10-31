find_package(SDL3 REQUIRED)

add_executable (atelierEngine "main.cpp")

target_include_directories(atelierEngine PRIVATE ${SDL3_INCLUDE_DIRS})
target_link_libraries(atelierEngine PRIVATE SDL3::SDL3)
