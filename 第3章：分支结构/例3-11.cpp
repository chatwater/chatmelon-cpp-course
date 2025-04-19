#include <iostream>
using namespace std;
// 买铅笔
// 三元表达式（问号表达式） S1 ? S2 : S3
// S1成立时执行S2，否则执行S3
int main() {
    int n, n1, n2, n3, p1, p2, p3, t1, t2, t3, total;
    cin >> n >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
    t1 = !(n % n1) ? n / n1 * p1 :(n / n1 + 1) * p1;
    t2 = !(n % n2) ? n / n2 * p2 :(n / n2 + 1) * p2;
    t3 = !(n % n3) ? n / n3 * p3 :(n / n3 + 1) * p3;
    total = t1; //假设t1是最小的
    if(t2 < total)  total = t2;
    if(t3 < total)  total = t3;
    cout << total << endl;
    return 0;
}


/**
int a;
if(人 == "男"){
    a = 1;
}else{
    a = 0;
} 

等价于：

int a;
a = 人 == "男" ? 1 : 0

bool b;
b = 人 == "男"


 */