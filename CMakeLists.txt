cmake_minimum_required(VERSION 3.28)
project(C__)

set(CMAKE_CXX_STANDARD 14)

add_executable(input input.cpp)
add_executable(math math.cpp)
add_executable(random random.cpp)
add_executable(scope scope.cpp)
add_executable(forEach forEach.cpp)
add_executable(pointers pointers.cpp)
add_executable(functionTemplate function_template.cpp)
add_executable(enums enums.cpp)
add_executable(object object.cpp)
add_executable(constructors constructors.cpp)
add_executable(constructor_overloading constructor_overloading.cpp)
add_executable(getter_setter getter_setter.cpp)
add_executable(inheritance inheritance.cpp)
add_executable(array1 array1.cpp)

add_executable(vector1 vector/vector1.cpp)
add_executable(vector2 vector/vector2.cpp)
add_executable(vector3_arithmetic vector/vector3_arithmetic.cpp)
add_executable(vector4_2D_array vector/vector4_2D_array.cpp)
add_executable(vector5 vector/vector5.cpp)

add_executable(set1 set/set1.cpp)
add_executable(set2 set/set2.cpp)

add_executable(const_pointers pointers/const_pointers.cpp)

add_executable(reference1  reference/reference1.cpp)
add_executable(const_reference  reference/const_reference.cpp)