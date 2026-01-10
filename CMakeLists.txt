cmake_minimum_required(VERSION 4.1)
project(42SP C)

set(CMAKE_C_STANDARD 23)

add_executable(42SP main.c
        src/C00_output_looping.c
        include/C00_output_looping.h
        include/C01_pointers_memory_access.h
        src/C01_pointers_memory_access.c
        src/C02_string.c
        include/C03_string_memory.h
        src/C03_string_memory.c
)
