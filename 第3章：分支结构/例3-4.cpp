#include <iostream>
using namespace std;
// Apples
// 分支语句 if
int main() {
    int x;
    cin >> x;
    cout << "Today, I ate " << x << " apple";  
    if(x != 0 && x != 1){
        cout << "s";
    }
    cout << "." << endl;
    return 0;
}
/*
if(成立条件表达式){
    当条件成立时执行的语句;
}
*/