PROJECT(TestBoostThread)
add_executable (test_boost_thread test_boost_thread.cpp)
target_link_libraries (test_boost_thread boost_thread-mt)
