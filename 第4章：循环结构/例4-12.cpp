#include <iostream>
using namespace std;
// 数列求和（2）：0.1+0.2+0.3+...+(n-0.2)+(n-0.1)
// 解法: for语句
int main() {
    int n;
    double s = 0;
    cin >> n;
    // 书上代码-错误代码,因为浮点数比较时存在精度问题 i!=n会一直循环
    // for(double i = 0.1; i != n; i+= 0.1) {
    //     s += i;
    // }
    // 书上代码改正后-正确代码,i<n也不对，因为浮点数比较时存在精度问题，写成i+0.01<n
    for(double i = 0.1; i +0.01< n; i+= 0.1) {
        s += i;
    }
    cout << s << endl;
    return 0;
}