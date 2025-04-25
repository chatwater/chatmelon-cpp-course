#!/bin/bash

# 获取参数
FILE_NAME=$1
FILE_WITHOUT_EXT=$2
BUILD_DIR=$3

# 创建构建目录
mkdir -p "$BUILD_DIR"

# 检测操作系统类型
OS_TYPE=$(uname)

if [[ "$OS_TYPE" == "Darwin" || "$OS_TYPE" == "Linux" ]]; then
    # macOS 或 Linux 配置
    clear
    COMPILER="clang++"
    if [[ "$OS_TYPE" == "Linux" && ! -x "$(command -v clang++)" ]]; then
        COMPILER="g++"
    fi
    $COMPILER -std=c++17 -Wall -Wextra "$FILE_NAME" -o "$BUILD_DIR/$FILE_WITHOUT_EXT.out"
    "$BUILD_DIR/$FILE_WITHOUT_EXT.out"
else
    # Windows 配置
    cls 2> /dev/null || clear
    g++ -std=c++17 -Wall -Wextra "$FILE_NAME" -o "$BUILD_DIR/$FILE_WITHOUT_EXT.exe"
    "$BUILD_DIR/$FILE_WITHOUT_EXT.exe"
fi