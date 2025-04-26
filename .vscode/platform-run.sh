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
if [[ "$OSTYPE" == "msys" ]] || [[ "$OSTYPE" == "win32" ]] || [[ "$OSTYPE" == "cygwin" ]]; then
    # Windows系统
    "$SCRIPT_DIR/run.bat" "$1" "$2" "$BUILD_DIR"
else
    # macOS或Linux系统
    "$SCRIPT_DIR/run.sh" "$1" "$2" "$BUILD_DIR"
fi