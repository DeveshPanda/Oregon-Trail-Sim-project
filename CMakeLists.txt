CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

Project(Final_Project)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main src/main.cpp src/Player.cpp src/BCOE.cpp src/CHASS.cpp src/CNAS.cpp src/RandomEvent.cpp)

ADD_EXECUTABLE(test test.cpp src/BCOE.cpp src/Player.cpp src/RandomEvent.cpp)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
