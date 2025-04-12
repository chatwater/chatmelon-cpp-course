#include <iostream>
#include <string>
using namespace std;
// 标题统计
// string类型字符串: 不是字符数组，而是新的数据类型，string 用于表示字符串
int main() {
    string s;
    int ans = 0;
    while (cin >> s) {
        ans += s.length();
    }
    cout << ans << endl;
    return 0;
}
/*
输入：
dasljg
34^&(7afdj
408HH98kj
ctrl + Z //注意最后要加上快捷键表示输入结束：1.在 Windows 电脑上，使用 Ctrl + Z 并按下 Enter 可以结束输入。2.在 Mac 电脑上，使用 Ctrl + D 可以结束输入。

输出
25
*/