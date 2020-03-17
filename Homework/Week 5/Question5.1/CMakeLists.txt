cmake_minimum_required(VERSION 3.15)
project(Question5_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.vs)
include_directories(Debug)

add_executable(Question5_1
        .vs/Question5.1/v16/ipch/AutoPCH/9a8fe32b58680517/MAIN.ipch
        .vs/Question5.1/v16/.suo
        .vs/Question5.1/v16/Browse.VC.db
        Debug/Question5.1.tlog/CL.command.1.tlog
        Debug/Question5.1.tlog/CL.read.1.tlog
        Debug/Question5.1.tlog/CL.write.1.tlog
        Debug/Question5.1.tlog/link.command.1.tlog
        Debug/Question5.1.tlog/link.read.1.tlog
        Debug/Question5.1.tlog/link.write.1.tlog
        Debug/Question5.1.tlog/Question5.1.lastbuildstate
        Debug/main.obj
        Debug/Question5.1.exe
        Debug/Question5.1.ilk
        Debug/Question5.1.log
        Debug/Question5.1.pdb
        Debug/vc142.idb
        Debug/vc142.pdb
        main.cpp
        Question5.1.sln
        Question5.1.vcxproj
        Question5.1.vcxproj.filters
        Question5.1.vcxproj.user)
