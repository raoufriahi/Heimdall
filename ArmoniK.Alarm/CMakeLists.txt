cmake_minimum_required(VERSION 3.15)
project(avalarm)

file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADER "include/*.h")

include_directories(
    ..
    ./include
    ../include   
    ../xcmnlib/include  
    ../3rdparty/leveldb/include
    ../3rdparty/spdlog/include/
    ../3rdparty/protobuf/src/
    ../3rdparty/poco/Data/include/
    ../3rdparty/poco/Foundation/include/
    ../3rdparty/poco/Util/include/
    ../3rdparty/poco/Data/SQLite/include/
    ../velib/include
    ../engine/include/
    ../avconfig/include/
    )
add_definitions(-DLINUX_OS=1)
ADD_LIBRARY( ${PROJECT_NAME} SHARED
              ${SOURCES} ${HEADER})


install(TARGETS ${PROJECT_NAME} 
            LIBRARY DESTINATION lib/
            ARCHIVE DESTINATION lib/)
