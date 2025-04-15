#include <iostream>
#include <string>
using namespace std;
// 【题目】最厉害的学生
// 知识点：结构体的使用
struct student {
    string name;
    int chinese, math, english;
} a, ans;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a.name >> a.chinese >> a.math >> a.english;
        if(a.chinese + a.math + a.english > ans.chinese + ans.math + ans.english){
            ans = a;
        }
    }
    cout << a.name << " " << a.chinese << " " << a.math << " " << a.english << endl;
    return 0;
}

/**
 * 输入例子：
 * 2
 * 张三 130 141 143
 * 李四 126 148 140
 * 
 * 输出例子：
 * 李四 126 148 140
 */

/**
 * C++中结构体定义：
 * struct 结构体名{
 *     数据类型1 成员名1;
 *     数据类型2 成员名2;
 *     ...
 * } [结构体变量名]；
 */
 * /