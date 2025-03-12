cmake_minimum_required(VERSION 3.10)

project(tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

#set version configure, pass cmake setting to source code
configure_file(tutorialconfig.h.in tutorialconfig.h)

#add option, default ON
option(USE_MYMATH "use my math library" ON)

if (USE_MYMATH)
    #add mathfunctions library
    add_subdirectory(mathfunctions)

    list(APPEND EXTRA_LIBS mathfunctions)
    # list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/mathfunctions")
endif()

#add the executable
add_executable(tutorial main.cpp)

target_link_libraries(tutorial PUBLIC ${EXTRA_LIBS})


target_include_directories(tutorial PUBLIC 
                        ${PROJECT_BINARY_DIR})
                        # ${EXTRA_INCLUDES})

install(TARGETS tutorial DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/tutorialconfig.h" DESTINATION include)