#include <iostream>
using namespace std;
// 【题目】质数筛：输入n(n<=100)和n个整数，输出n个数中所有的质数
// 知识点：定义子程序

int a[100], n;
bool is_prime(int x){
    if(x == 0 || x == 1) return 0;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return 0; //不建议省略{},如要省略可写在一行
    }
    return 1;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(is_prime(a[i])) 
            cout << a[i] << " ";//不建议省略{},如要省略，写在下一行请注意缩进
    }
    cout << endl;
    return 0;
}
