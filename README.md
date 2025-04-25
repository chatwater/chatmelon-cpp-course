# ChatMelon C++教程

ChatMelon是来自中国四川的中学生，这是她的C++编程课程资料。本教程基于《深入浅出程序设计（基础篇）》，适合C++初学者学习使用。

## 课程目录
- 第1章：入门C++
- 第2章：顺序结构
- 第3章：分支结构
- 第4章：循环结构
- 第5章：数组
- 第6章：字符串
- 第7章：函数与结构体

## 环境配置

### 安装开发工具
1. 下载并安装 [Visual Studio Code](https://code.visualstudio.com/)
2. 安装必要的VS Code插件：
   - [C/C++ 插件](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)（必须）
   - [Code Runner 插件](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)（推荐，可以更方便地运行代码）
   - [GitHub Copilot](https://marketplace.visualstudio.com/items?itemName=GitHub.copilot)（可选，提供代码补全和建议）
   - [GitHub Copilot Chat](https://marketplace.visualstudio.com/items?itemName=GitHub.copilot-chat)（可选，提供代码补全和建议）

### 编译器安装
- **Windows用户**：下载安装 [MinGW](https://www.mingw-w64.org/downloads/)，并添加到环境变量
- **Mac用户**：通过终端安装Xcode Command Line Tools：`xcode-select --install`
- **Linux用户**：安装GCC/G++，例如Ubuntu：`sudo apt-get install build-essential`

### 获取代码
```bash
git clone https://github.com/yourname/chatmelon-cpp-course.git
cd chatmelon-cpp-course
```

### 配置调整
- 如果你使用Mac系统，`.vscode/settings.json`默认配置已适配
- 如果你使用Windows系统，请修改`.vscode/settings.json`文件，取消注释Windows配置，注释Mac配置

## 使用方法
1. 在VS Code中打开项目文件夹
2. 选择任意章节中的`.cpp`文件
3. 使用Code Runner插件运行代码（右上角的▶按钮或快捷键Ctrl+Alt+N）
4. 查看每章`.md`文件了解相关知识点

## 学习资源
- B站视频：[VSCode的安装、VSCode的C/C++环境配置、VSCode的使用](https://www.bilibili.com/video/BV1z4RcY1EwT)
- [C++参考手册](https://en.cppreference.com/)
- [菜鸟教程 C++](https://www.runoob.com/cplusplus/cpp-tutorial.html)
- [洛谷训练题单](https://www.luogu.com.cn/training/list)

## 贡献
欢迎提出问题和改进建议，可以通过Issue或Pull Request参与贡献。

