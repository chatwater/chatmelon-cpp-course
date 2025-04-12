#include <iostream>
#include <cmath>
#define MAXN 1024
using namespace std;
// 旗鼓相当的对手
// 多维数组的应用
int main() {
    int n, a[3][MAXN], ans = 0;
    cin >> n; // 输入对手的数量
    for (int i = 0; i < n; i++) {
        cin >> a[0][i] >> a[1][i] >> a[2][i]; // 输入每个学生的语数英成绩
    }
    for (int i = 0; i <= n-1; i++) { //枚举第一个学生i
        for(int j = i + 1; j <= n; j++){ //枚举第二个学生j
            if(abs(a[0][i] - a[0][j]) <= 5 
            && abs(a[1][i] - a[1][j]) <= 5 
            && abs(a[2][i] - a[2][j]) <= 5
            && abs(a[0][i] + a[1][i] + a[2][i] - a[0][j] - a[1][j] - a[2][j]) <= 10
            ) {
                ans++; // 如果这两名学生是旗鼓相当的对手，则计数器加1
            }
        }
    }
    cout << ans << endl; // 输出旗鼓相当的对手的数量
    return 0;
}