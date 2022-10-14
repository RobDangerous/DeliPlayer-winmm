set(CMAKE_GENERATOR_PLATFORM "Win32" CACHE STRING "" FORCE)
PROJECT(winmm)
ENABLE_LANGUAGE(C CXX)
ADD_LIBRARY(winmm SHARED winmm.cpp winmm.def empty.h hook_macro.h)