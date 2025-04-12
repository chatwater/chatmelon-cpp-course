#include <iostream>
using namespace std;
// 质数口袋: 给出一个数L,请问你能装下多少个质数（这些质数的和不超过L）
// 质数的定义：只能被1和它本身整除的数
int main() {
    int L, load=0, ans=0;
    cin >> L;
    for(int i=2; ; i++) {
        int is_prime = 1;
        for(int j=2; j*j <= i; j++) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if(!is_prime) {
            continue;
        }
        if(i+load > L) {
            break;
        }
        cout << i << endl;
        ans++;
        load += i;
    }
    cout << ans << endl;
    return 0;
}