#include <cstdio>
// using namespace std;
// 分类平均
// for语句的应用
int main() {
    int n, k;
    int Asum = 0, Bsum = 0;
    scanf("%d%d", &n, &k);
    //i += k 相当于 i = i + k，即i每次加k
    for (int i = k; i <= n; i += k) {
        Asum += i;
    }
    Bsum = (1 + n) * n / 2 - Asum;
    printf("%.1f ", double(Asum) / (n / k));//分类平均
    printf("%.1f\n", double(Bsum) / (n - n / k));//分类平均
    return 0;
}
