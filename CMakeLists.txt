cmake_minimum_required(VERSION 3.25)
project(Systems2Ex5A)

set(CMAKE_CXX_STANDARD 14)

add_executable(Systems2Ex5A sources/MagicalContainer.h sources/MagicalContainer.cpp Demo.cpp sources/AscendingIterator.hpp sources/SideCrossIterator.hpp sources/PrimeIterator.hpp sources/SideCrossIterator.cpp sources/PrimeIterator.cpp sources/AscendingIterator.cpp)
