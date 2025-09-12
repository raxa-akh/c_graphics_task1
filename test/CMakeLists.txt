add_executable(test_edu_math main.c)
target_include_directories(test_edu_math PRIVATE ${CRITERION_DIR}/include)
target_link_directories(test_edu_math PRIVATE ${CRITERION_DIR}/lib)
target_link_libraries(test_edu_math PRIVATE edu_math criterion)
target_compile_options(test_edu_math PRIVATE -Wall -Wextra -pedantic -Werror)

add_test(NAME test_edu_math COMMAND test_edu_math)