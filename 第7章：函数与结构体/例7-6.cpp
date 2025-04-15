#include <iostream>
#include <string>
using namespace std;
// 【题目】自动修正加强版
// 知识点：变量作用域和参数传递
string to_upper(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 'a' - 'A'; //相当于s[i] = s[i] - 'a' + 'A'
        }
    }
    return s;
}
int main() {
    string s1, s2;
    // getline(cin, 字符串名称)表示将完整的一行的输入数据读入到字符串中，无论这一行是否有空格。例6-7也是使用getline函数的例子。
    getline(cin, s1);
    s2 = to_upper(s1);
    cout << s1 << endl << s2 << endl;
    return 0;
}

/**
 * 输入样例：
 * jdajUYdas
 * 
 * 输出样例：
 * jdajUYdas
 * JDADUYDAS
 */