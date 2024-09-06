# CMakeList.txt: проект CMake для CalendarPredmetov; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (WIN32)
    if (POLICY CMP0141)
	    cmake_policy(SET CMP0141 NEW)
	    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
    endif()
endif()

project ("CalendarPredmetov")
set(CMAKE_BUILD_TYPE "Debug")

set("BIN" ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${BIN}/${CMAKE_BUILD_TYPE}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BIN}/${CMAKE_BUILD_TYPE}")

set(S_F
	main.cpp
)
set(H_F)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (${PROJECT_NAME} ${S_F} ${H_F})

if (CMAKE_VERSION VERSION_GREATER 3.12)
	set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
	set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
