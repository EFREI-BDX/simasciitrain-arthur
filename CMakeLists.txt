cmake_minimum_required(VERSION 3.29)
project(simasciitrain)

set(CMAKE_CXX_STANDARD 20)

add_executable(simasciitrain
        simasciitrain/TypeWagon.h
        simasciitrain/TypeWagon.cpp
        simasciitrain/TypeLocomotive.cpp
        simasciitrain/TypeLocomotive.h
        simasciitrain/AbstractWagon.cpp
        simasciitrain/AbstractWagon.h
        simasciitrain/FreightWagon.cpp
        simasciitrain/FreightWagon.h
        simasciitrain/main.cpp
        simasciitrain/UtilityWagon.cpp
        simasciitrain/UtilityWagon.h
        simasciitrain/PassengerWagon.cpp
        simasciitrain/PassengerWagon.h
        simasciitrain/AbstractLocomotive.cpp
        simasciitrain/AbstractLocomotive.h
        simasciitrain/TrainElement.h
        simasciitrain/ElectricLocomotive.cpp
        simasciitrain/ElectricLocomotive.h
        simasciitrain/GasolineLocomotive.cpp
        simasciitrain/GasolineLocomotive.h
        simasciitrain/Wagons.cpp
        simasciitrain/Wagons.h
        simasciitrain/ITrain.h
        simasciitrain/Train.cpp
        simasciitrain/Train.h
)
