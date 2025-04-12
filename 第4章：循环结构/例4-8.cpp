#include <iostream>
using namespace std;
// 计数问题
// for循环套用while循环
int main() {
    int n, x, ans = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; i++) { //外层循环控制数字的范围
        int tmp=i, num;
        while(tmp != 0) { //内层循环计算每个数字的个数
            num = tmp % 10;
            if(num == x) {
                ans++;
            }
            tmp /= 10;
        }
    }
    cout << ans << endl;
    return 0;
}