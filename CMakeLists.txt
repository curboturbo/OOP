cmake_minimum_required(VERSION 3.10)
project(ParenthesesChecker)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включаем тестирование
enable_testing()

# Находим GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Добавляем директорию с исходниками
include_directories(${CMAKE_SOURCE_DIR}/src)

# Тестовый исполняемый файл
add_executable(test_ch tests/test_ch.cpp src/ch.cpp)
target_link_libraries(test_ch GTest::GTest GTest::Main)

# Регистрируем тесты
add_test(NAME ChTests COMMAND test_ch)