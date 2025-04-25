@echo off
REM 获取参数
set FILE_NAME=%1
set FILE_WITHOUT_EXT=%2
set BUILD_DIR=%3

REM 创建构建目录
if not exist "%BUILD_DIR%" mkdir "%BUILD_DIR%"

REM 清屏
cls

REM 编译并运行
g++ -std=c++17 -Wall -Wextra "%FILE_NAME%" -o "%BUILD_DIR%\%FILE_WITHOUT_EXT%.exe"
"%BUILD_DIR%\%FILE_WITHOUT_EXT%.exe"