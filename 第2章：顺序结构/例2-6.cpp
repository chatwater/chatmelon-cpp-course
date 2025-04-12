#include <iostream>
using namespace std;
// 字母转换
int main() {
    char ch, ans;
    cin >> ch;
    ans = ch - 'a' + 'A';
    cout << ans << endl; //输出转换后的字符(如果输入是小写字母，则转换为大写字母)
    return 0;
}

