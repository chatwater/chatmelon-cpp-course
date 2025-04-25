#!/bin/bash

# 获取当前脚本目录
SCRIPT_DIR=$(cd "$(dirname "$0")" && pwd)

# 项目根目录
WORKSPACE_ROOT=$(cd "$SCRIPT_DIR/.." && pwd)

# 构建目录设置为根目录下的 build 文件夹
BUILD_DIR="$WORKSPACE_ROOT/build"

# 创建构建目录
mkdir -p "$BUILD_DIR"

# 获取参数
FILE_PATH=$1
FILE_NAME_WITHOUT_EXT=$2

# 检测操作系统类型
OS_TYPE=$(uname)

if [[ "$OS_TYPE" == "Darwin" || "$OS_TYPE" == "Linux" ]]; then
    # macOS 或 Linux 配置
    clear
    COMPILER="clang++"
    if [[ "$OS_TYPE" == "Linux" && ! -x "$(command -v clang++)" ]]; then
        COMPILER="g++"
    fi
    $COMPILER -std=c++17 -Wall -Wextra "$FILE_PATH" -o "$BUILD_DIR/$FILE_NAME_WITHOUT_EXT.out"
    "$BUILD_DIR/$FILE_NAME_WITHOUT_EXT.out"
else
    # Windows 配置
    cls 2> /dev/null || clear
    g++ -std=c++17 -Wall -Wextra "$FILE_PATH" -o "$BUILD_DIR/$FILE_NAME_WITHOUT_EXT.exe"
    "$BUILD_DIR/$FILE_NAME_WITHOUT_EXT.exe"
fi