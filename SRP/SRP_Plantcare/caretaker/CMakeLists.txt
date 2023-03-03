project(caretaker)

include_directories(${PROJECT_SOURCE_DIR}/inc)

set(SOURCE
	${PROJECT_SOURCE_DIR}/inc/PlantCareTaker.hpp
	${PROJECT_SOURCE_DIR}/src/PlantCareTaker.cpp	
)

add_library(${PROJECT_NAME} STATIC ${SOURCE})
target_include_directories(${PROJECT_NAME} PUBLIC &{PROJECT_SOURCE_DIR}/inc)

