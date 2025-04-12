#include <iostream>
using namespace std;
// 冰雹猜想：一个正整数n，如果它是偶数，则把它除以2；如果它是奇数，则把它乘以3加1。经过若干次迭代后，最终总可以到达1。
// 一维数组的应用
#define MAXN 205
int main() {
    int n, num = 0, a[MAXN];
    cin >> n;
    while(n != 1) {
        a[num] = n; // 记录每次迭代的结果
        num++; 
        if(n % 2 == 0) {
            n /= 2; // 偶数除以2
        } else {
            n = 3 * n + 1; // 奇数乘以3加1
        }
    }
    a[num] = 1; // 最终结果为1
    for(int i = num; i >= 0; i--) {
        cout << a[i] << " "; // 倒序输出
    }
    cout << endl;
    return 0;
}