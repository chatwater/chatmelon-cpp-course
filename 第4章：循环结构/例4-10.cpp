#include <iostream>
using namespace std;
// 金币
int main() {
    int k, coin = 0, day = 0;
    cin >> k;
    for(int i = 1;;i++){//外层循环控制天数
        for(int j = 1;j <= i;j++){//内层循环控制金币的数量
            coin += i;
            day++;
            if( day == k){ //判断天数是否等于k
                cout << coin << endl;
                return 0;
            }
        }
    }
    return 0;
}