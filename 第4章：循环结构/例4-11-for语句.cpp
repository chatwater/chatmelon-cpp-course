#include <iostream>
using namespace std;
// 数列求和：1+2+3+...+n
// 解法1: for语句，循环变量i从1到n
int main() {
    int s=0, n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    cout << s << endl;
    // 1+2+3+...+n = n*(n+1)/2
    return 0;
}