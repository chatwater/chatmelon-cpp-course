#include <iostream>
using namespace std;
// Apples Plus
// for语句的应用
int main() {
    int L, i; 
    cin >> L; //L = 10
    //{ }里的代码循环执行了10次，i的值依次等于1,2,3,4,5,6,7,8,9,10,11
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

 for (i = 1; i <= L; i+=2) { } 代码解构后执行顺序：
 L=10
 i=1
 if(i <= L){

 }
 i+=2; //i=3
 if(i <= L){

 }
 i+=2; //i=5
 if(i <= L){

 }
 i+=2; // i=7
 if(i <= L){

 }
 i+=2; // i=9
 if(i <= L){

 }
 i+=2; // i=11
 if(i <= L){ //只判断，不执行{}里的代码

 }


*/
