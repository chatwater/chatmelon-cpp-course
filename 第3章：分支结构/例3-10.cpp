#include <iostream>
using namespace std;
// 分支程序设计案例
int main() {
    int t1, t2, maxtime = 8, maxday = 0;
    cin >> t1 >> t2;//输入第一天的两个时间
    if(t1+t2 > maxtime) maxtime = t1+t2, maxday = 1;

    cin >> t1 >> t2;//输入第二天的两个时间
    if(t1+t2 > maxtime) maxtime = t1+t2, maxday = 2;

    cin >> t1 >> t2;//输入第三天的两个时间
    if(t1+t2 > maxtime) maxtime = t1+t2, maxday = 3;

    cin >> t1 >> t2;//输入第四天的两个时间
    if(t1+t2 > maxtime) maxtime = t1+t2, maxday = 4;

    cin >> t1 >> t2;//输入第五天的两个时间
    if(t1+t2 > maxtime) maxtime = t1+t2, maxday = 5;

    cin >> t1 >> t2;//输入第六天的两个时间
    if(t1+t2 > maxtime) maxtime = t1+t2, maxday = 6;

    cin >> t1 >> t2;//输入第七天的两个时间
    if(t1+t2 > maxtime) maxtime = t1+t2, maxday = 7;
    cout << maxday;
    return 0;
}