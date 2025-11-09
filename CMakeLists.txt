cmake_minimum_required(VERSION 3.29)
project(Project2_DSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project2_DSA
        main.cpp
        heap_sort.cpp
        heap_sort.h
        merge_sort.cpp
        merge_sort.h
        visualisation.cpp
        visualisation.h)

include_directories(
        "${CMAKE_SOURCE_DIR}/bridges-cxx-master/src"
        "${CMAKE_SOURCE_DIR}/bridges-cxx-master/packaging/windows/dependencies/curl/libcurl-vc-x64-release-dll-ipv6-sspi-winssl/include"
        "${CMAKE_SOURCE_DIR}/bridges-cxx-master/packaging/windows/dependencies/rapidjson/rapidjson-73063f5002612c6bf64fe24f851cd5cc0d83eef9/include"
)
target_link_libraries(Project2_DSA PRIVATE "${CMAKE_SOURCE_DIR}/bridges-cxx-master/packaging/windows/dependencies/curl/libcurl-vc-x64-release-dll-ipv6-sspi-winssl/lib/libcurl.lib")