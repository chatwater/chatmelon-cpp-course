#include <iostream>
using namespace std;
// Apples Plus
// for语句的应用
int main() {
    int L, i; 
    cin >> L;
    for (i = 1; i <= L; i++) {
        cout << "Today, I ate " << i << " apple";
        if( i != 0 && i != 1) {
            cout << "s";
        }
        cout << "." << endl;
    }
    return 0;
}
/*
 for(循环变量初始值； 循环条件； 每轮循环结束操作){
    循环体
 }

*/