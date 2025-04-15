#include <cstdio>
#include <algorithm>
using namespace std;
// 【题目】唱歌比赛
// 知识点：变量作用域和参数传递
int s[25], n, m, maxsum;
void stat(int a[], int m){
    int maxscore = 0, minscore = 10, sum = 0;
    for (int i = 0; i < m; i++) {
        maxscore = max(a[i], maxscore);
        minscore = min(a[i], minscore);
        sum += a[i];
    }
    maxsum = max(maxsum, sum - maxscore - minscore); // 计算去掉最高分和最低分后的总分
}
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &s[j]);
        }
        stat(s, m);
    }
    printf("%.2f\n",double(maxsum)/(m - 2));//最后在计算平均分
    return 0;
}

/**
 * 输入例子：
 * 3 5
 * 10 9 8 7 6
 * 5 4 3 2 1
 * 1 2 3 4 5
 * 
 * 输出例子：
 * 8.00
 * 
 */
