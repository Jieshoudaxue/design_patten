add_library(mathfunctions mysqrt.cpp)

# INTERFACE: consumers require but the producer doesn't
target_include_directories(mathfunctions 
                        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})