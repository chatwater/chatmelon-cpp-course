#include <cstdio>
#include <algorithm> // 引入std::sort
using namespace std;
// 三个数排序 解法2
// 分使用内置函数std::sort
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int arr[3] = {a, b, c}; // 将三个数存入数组
    sort(arr, arr + 3);     // 使用std::sort排序

    printf("%d %d %d\n", arr[0], arr[1], arr[2]); // 按升序输出
    return 0;
}
