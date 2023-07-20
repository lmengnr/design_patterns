set(CMAKE_CXX_STANDARD 17)

project(factory_method_example)

add_executable(
    ${CMAKE_PROJECT_NAME}
    PizzaStore.h
    PizzaStore.cpp
    main.cpp
)