project(learning_c_02)
cmake_minimum_required(VERSION 3.7)

include(conan_include.cmake)

add_executable(learning_c_02
	src/main.c
	src/clparse.c
	src/parson_wrapper.c
)

target_include_directories(learning_c_02
	PRIVATE
		${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(learning_c_02
	CONAN_PKG::libuv
	CONAN_PKG::libhandler
	CONAN_PKG::Parson
)

#add_executable(learning_c_02_lib_uv_test
#	${PROJECT_SOURCE_DIR}/test/libuv_test.c
#)

#target_link_libraries(learning_c_02_lib_uv_test
#	PRIVATE
#		learning_c_02
#)

# https://cmake.org/cmake/help/v3.4/command/add_test.html 
# add_test(<name> <command> [<arg>...])
#enable_testing()
#add_test(NAME learning_c_02_lib_uv_test COMMAND learning_c_02_lib_uv_test)
