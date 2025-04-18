#include <iostream>
using namespace std;
// 小涵机器人
// 分支语句3（条件判断语句） switch...case...
int main() {
    char opt;
    cin >> opt;
    switch (opt) {
        case 'G':
            cout << "Hello my master" << endl;
            break;
        case 'N':
            cout << "I'm Xiaohan." << endl;
            break;
        case 'S':
            cout << "Teinei teinei teinei~" << endl;
            break;
        //条件相同的语句可以合并在一起
        case 'B': 
        case 'Q':
            cout << "Bye bye!" << endl;
            break;
        default:
            cout << "Sorry.." << endl;
            break;
    }
    return 0;
}

/*
    switch(变量){
        case 常量1:
            当变量等于常量1时执行的语句;
            break;
        case 常量2:
            当变量等于常量2时执行的语句;
            break;
        default:
            当变量不等于任何一个常量时执行的语句;
            break;
    }
*/