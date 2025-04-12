#include <iostream>
using namespace std;
// 级数求和 1 + 1/2 + 1/3 + ... + 1/n > k
// for语句的应用
int main() {
    int k, ans = 0;
    cin >> k;
    // 常规写法
    for(double Sn = 0; Sn <= k; ans++) {
        Sn += 1.0 / (ans+1);
    }
    // 合并写法
    // for(double Sn = 0; Sn < k; ans++, Sn += 1.0 / ans);
    cout << ans << endl;
    return 0;
}