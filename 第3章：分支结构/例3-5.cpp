#include <iostream>
using namespace std;
// 分支语句2（条件判断语句） if...else...
int main() {
    int n;
    cin >> n;
    if( (5*n) < (11 + 3*n)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

/*
    if(成立条件表达式){
        当条件成立时执行的语句;
    }else{
        当条件不成立时执行的语句;
    }
*/