#include <iostream>
using namespace std;
// 阶乘之和 计算S = 1!+2!+3!+...+n!
// for循环嵌套for循环
int main() {
    long long n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) { //外层循环控制阶乘的次数
        long long factor = 1;
        for (int j = 1; j <= i; j++) { //内层循环计算阶乘
            factor *= j;
        }
        ans += factor;
    }
    cout << ans << endl;
    return 0;
}