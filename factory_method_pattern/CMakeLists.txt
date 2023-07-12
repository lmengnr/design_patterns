set(CMAKE_CXX_STANDARD 20)

project(factory_method_example)

add_executable(
    ${CMAKE_PROJECT_NAME}
    PizzaStore.h
    PizzaStore.cpp
    main.cpp
)