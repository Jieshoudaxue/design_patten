add_library(mathfunctions mysqrt.cpp)
# add_library(mathfunctions SHARED mysqrt.cpp)

# INTERFACE: consumers require but the producer doesn't
target_include_directories(mathfunctions 
                        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS mathfunctions DESTINATION lib)
install(FILES mathfunctions.h DESTINATION include)