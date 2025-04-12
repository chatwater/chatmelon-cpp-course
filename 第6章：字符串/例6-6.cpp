#include <iostream>
#include <string>
using namespace std;
// 文字处理软件
// 学习字符串的操作函数
// 1. append 函数：在字符串末尾插入一个字符串
// 2. substr 函数：截取字符串，l表示起始位置，r表示长度
// 3. insert 函数：在指定位置插入字符串
// 4. find 函数：查找字符串，返回位置
int main() {
    int n, opt, l, r;
    string s, a;
    cin >> n; // 输入字符串的操作次数
    cin >> s; // 输入字符串
    while (n--) {
        cin >> opt; // 输入操作类型
        if (opt == 1) {
            cin >> a; // 输入要插入的字符串
            s.append(a); // 在字符串末尾插入
            cout << s << endl; // 输出字符串
        } else if (opt == 2) {
            cin >> l >> r; 
            s = s.substr(l, r); // 截取字符串，l表示起始位置，r表示长度
            cout << s << endl; // 输出字符串
        } else if (opt == 3) {
            cin >> l >> a;
            s.insert(l, a); // 在指定位置插入字符串
            cout << s << endl; // 输出字符串
        } else {
            cin >> a;
            cout << (int)s.find(a) << endl; // 查找字符串，返回位置
            // 如果没有找到，返回 -1
            // 如果找到，返回第一次出现的位置
        }
    }
    return 0;
}

/*
输入：4
输出：ILove
输入：1 China
输出：ILoveChina
输入：3 5 VeryBeautiful
输出：ILoveVeryBeautifulChina
输入：4 Very
输出：5
*/