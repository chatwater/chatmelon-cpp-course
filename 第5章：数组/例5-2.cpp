#include <iostream>
using namespace std;
// 小鱼的数字游戏：帮小鱼记住一组数字，0表示结束，再反着念出来
// 一维数组的应用
int main() {
    int n = 0, tmp, a[110];
    do{
        cin >> tmp;
        a[n] = tmp; // 输入数字
        n++;
    }while(tmp != 0);// 0是结束标志，不能算在内
    // 反向输出
    n--; // 去掉结束标志0。
    // 反向输出0以外的其它数
    while( n-- ){
        cout << a[n] << " ";
    }
    cout << endl;
    return 0;
}
/*
为什么要 n-- ? 因为：当输入为0时，n会多加1。
while 在每次循环之前检查条件。
do...while 在每次循环之后检查条件。
*/