project(github-actions-test)

file(COPY main.cpp DESTINATION .)

message("###################################")
message(STATUS "${CMAKE_HOST_SYSTEM_NAME}")

cmake_host_system_information(RESULT LOGICAL_CPUS QUERY NUMBER_OF_LOGICAL_CORES)
message(STATUS "${LOGICAL_CPUS}")

cmake_host_system_information(RESULT PHYSICAL_CPUS QUERY NUMBER_OF_PHYSICAL_CORES)
message(STATUS "${PHYSICAL_CPUS}")

message("###################################")

add_executable(${PROJECT_NAME} main.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>")