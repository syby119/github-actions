project(github-actions-test)

message("###################################")
message(STATUS "${CMAKE_HOST_SYSTEM_NAME}")
message("###################################")

add_executable(${PROJECT_NAME} main.cpp)