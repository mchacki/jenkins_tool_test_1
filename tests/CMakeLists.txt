include(GoogleTest)

add_executable(
        mchacki_test
        MathTestTest.cpp
)
target_link_libraries(
        mchacki_test
        MathLib
        GTest::gtest_main
)

gtest_discover_tests(mchacki_test)
