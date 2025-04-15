#include <iostream>
using namespace std;
// 【题目】闰年展示：输入年份x和y（1582<=x<=3000），输出x到y之间的所有闰年个数和具体闰年年份
// 知识点：定义子程序
void init(); //定义读入部分
void doit(); //定义处理部分，do it两个单词的合写
void output(); //定义输出部分

int x, y, ans[500], cnt;

int main() {
    init(); //读入
    doit(); //处理
    output(); //输出
    return 0;
}

void init() {
    cin >> x >> y; //读入年份
    cnt = 0; //计数器清零
}
void doit() {
    for (int i = x; i <= y; i++) { //从x到y
        if (!(i % 400) || !(i % 4) && i % 100) { //判断是否为闰年
            ans[cnt++] = i; //存入数组，等同于ans[cnt] = i; cnt++;
        }
    }
}
void output() {
    cout << cnt << endl; //输出闰年数量
    for (int i = 0; i < cnt; i++) { //输出闰年
        cout << ans[i] << " ";
    }
    cout << endl;
}

/**
 * 扩展：main函数调用init、doit、output函数是同步的：
 * 即init函数执行完后，才会执行doit函数！doit函数执行完后，才会执行output函数！
 * 
 * 
 */