#include <iostream>
using namespace std;
// 彩票摇奖
// 一维数组的应用
int main() {
    int n, a[10], num[10] = {0};
    cin >> n; // 输入彩票的数量
    for (int i = 1; i <= 7; i++) {
        cin >> a[i]; // 创建一个数组，存储彩票的号码
    }
    while (n--) {
        int ans = 0;
        for (int i = 1; i <= 7; i++) {
            int x;
            cin >> x; // 输入每张彩票的号码
            for (int j = 1; j <= 7; j++) {
                if (a[j] == x) { // 如果彩票号码与中奖号码相同
                    ans++; // 中奖数量加1
                }
            }
        }
        num[ans]++; // 中奖号码的数量加1
    }
    for (int i = 7; i ; i--){
        cout << num[i] << (i == 1 ? "\n" : " "); // 输出中奖号码的数量
    }
    return 0;
}