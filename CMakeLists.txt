cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(plugin_example)

# Add vendored API dependency
add_subdirectory(vendor/api)

# Create plugin library target
add_library(plugin_example SHARED src/plugin.cpp)
target_compile_features(plugin_example PRIVATE cxx_std_17 c_std_99)
target_link_libraries(plugin_example PRIVATE binaryninjaapi)

# Plugins need to compile with `-fPIC` on Linux
if(${CMAKE_SYSTEM_NAME} STREQUAL "LINUX")
	target_compile_options(plugin_example PRIVATE "-fPIC")
endif()

# Auto-configure an `install` target
bn_install_plugin(plugin_example)
