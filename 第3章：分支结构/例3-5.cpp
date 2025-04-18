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
    
    扩展阅读(见例3-7)，可以继续往下面接：
    if(条件1){
        当条件1成立时执行的语句;
    }else if(条件2){
        当条件1不成立但条件2成立时执行的语句;
    }else if(条件3){
        当条件1和条件2都不成立但条件3成立时执行的语句;
    }else if(条件4){
        当条件1、2、3都不成立但条件4成立时执行的语句;
    }else{
        当条件1、2、3、4都不成立时执行的语句;
    }
*/

