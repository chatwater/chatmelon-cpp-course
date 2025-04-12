#include <iostream>
#include <cmath>
// 回文质数：找出范围[a,b]内的所有回文质数
// 书本上的太啰嗦，懒得誊写了。以下是Copilot写的：
using namespace std;

// 判断一个数是否是质数
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// 判断一个数是否是回文数
bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        if (isPrime(i) && isPalindrome(i)) {
            cout << i << endl;
        }
    }

    return 0;
}