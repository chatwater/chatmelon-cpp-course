#include <iostream>
using namespace std;
// 字母转换
int main() {
    char ch, ans;
    cin >> ch;
    //ch -('b' - 'B'); //任意一个小写字母ch减去('b' - 'B')，即可得到对应的大写字母
    ans = ch - 'a' + 'A';
    cout << ans << endl; //输出转换后的字符(如果输入是小写字母，则转换为大写字母)
    return 0;
}

