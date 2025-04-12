#include <iostream>
using namespace std;
// 肥胖问题
// 分支嵌套
int main() {
    double m, h, BMI;
    cin >> m >> h;
    BMI = m / (h * h); // 计算BMI
    if (BMI < 18.5) {
        cout << "偏瘦" << endl;
    }else if (BMI < 24) {
        cout << "正常" << endl;
    }else if (BMI < 28) {
        cout << "偏胖" << endl;
    }else if (BMI < 32) {
        cout << "肥胖" << endl;
    }else {
        cout << "重度肥胖" << endl;
    }
    cout << "BMI = " << BMI << endl;
    return 0;
}
/*
    // 以上是分支嵌套的写法
    if(条件1){
        执行语句1;
    }else if(条件2){
        执行语句2;
    }else if(条件3){
        执行语句3;
    }else if(条件4){
        执行语句4;
    }else{
        执行语句5;
    }
*/