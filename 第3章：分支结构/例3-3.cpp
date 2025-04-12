#include <iostream>
using namespace std;
//闰年判断
int main() {
    int x; bool p;
    cin >> x;
    p = (x % 400 == 0) || (x % 4 == 0 && x % 100 != 0); // x是闰年
    // p = !(x % 400) || (!(x % 4) && x % 100); // x是闰年
    cout << p << endl; // 1表示是闰年，0表示不是闰年
    return 0;
}