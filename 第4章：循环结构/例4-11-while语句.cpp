#include <iostream>
using namespace std;
// 数列求和：1+2+3+...+n
// 解法2: while语句
int main() {
    int s=0, i=0, n;
    cin >> n;
    //书上代码
    while(n--){
        s += ++i;
    }
    // 书上代码相当于
    // while(n--){
    //     i++;
    //     s += i;
    // }
    // 易读代码写法
    // while (i < n) {
    //     i++;
    //     s += i;
    // }
    cout << s << endl;
    // 1+2+3+...+n = n*(n+1)/2
    return 0;
}