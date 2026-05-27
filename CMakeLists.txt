cmake_minimum_required(VERSION 3.24)

project(DirectXRenderingPipeline LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(directxtk CONFIG REQUIRED)
find_package(directxtex CONFIG REQUIRED)
find_package(directxmesh CONFIG REQUIRED)

add_executable(DirectXRenderingPipeline
    src/main.cpp
    src/Core/Window.cpp
)

target_include_directories(DirectXRenderingPipeline PRIVATE
    src
)

target_compile_definitions(DirectXRenderingPipeline PRIVATE
    UNICODE
    _UNICODE
)

target_link_libraries(DirectXRenderingPipeline PRIVATE
    Microsoft::DirectXTK
    Microsoft::DirectXTex
    Microsoft::DirectXMesh
    d3d11
    dxgi
    d3dcompiler
    shell32
)
