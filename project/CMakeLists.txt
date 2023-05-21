cmake_minimum_required(VERSION 3.25)
project(projektnaobiek)

set(CMAKE_CXX_STANDARD 23)

add_executable(projektnaobiek src/Application.cpp include/food/Food.h include/food/Pizza.h include/food/WithDough.h src/food/Pizza.cpp src/food/WithDough.cpp include/food/WithTopping.h src/food/WithTopping.cpp include/menu/Menu.h include/menu/StepDough.h include/menu/Position.h src/menu/StepDough.cpp include/menu/Step.h src/food/Menu.cpp include/menu/StepCheese.h src/menu/StepCheese.cpp include/menu/StepTopping.h src/menu/StepTopping.cpp include/menu/MenuException.h src/food/FoodFake.cpp)
