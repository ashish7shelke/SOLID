project(sensors)

include_directories(${PROJECT_SOURCE_DIR}/inc)

set(SOURCE
	    ${PROJECT_SOURCE_DIR}/inc/SunlightSensor.hpp
	    ${PROJECT_SOURCE_DIR}/inc/MoistureSensor.hpp
	    ${PROJECT_SOURCE_DIR}/src/SunlightSensor.cpp
	    ${PROJECT_SOURCE_DIR}/src/MoistureSensor.cpp
)

add_library(${PROJECT_NAME} STATIC ${SOURCE})
target_link_libraries(${PROJECT_NAME} caretaker)
target_include_directories(${PROJECT_NAME} PUBLIC &{PROJECT_SOURCE_DIR}/inc)

