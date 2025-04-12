#include <iostream>
using namespace std;
// 找最小值
// for语句的应用
int main() {
    int n, tmp, minnum = 100000000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp < minnum) {
            minnum = tmp;
        }
    }
    cout << minnum << endl;
    return 0;
}