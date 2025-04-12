#include <iostream>
using namespace std;
//数字反转
//输入格式：abc.d
//输出格式：d.cba
int main() {
    double p;
    int q, a, b, c, d;
    cin >> p; //p = abc.d
    //为什么*10，为了把小数变为4位整数，便于取整
    q = int(p * 10); // q = int(abc.d * 10) = int(abcd) = abcd
    a = q / 1000; // a = abcd / 1000 = a
    b = (q / 100) % 10; // b = (abcd / 100) % 10 = ab % 10 = b
    c = (q / 10) % 10; // c = (abcd / 10) % 10 = abc % 10 = c
    d = q % 10; // d = abcd % 10 = d
    cout << d << "." << c << b << a << endl;
    return 0;
}