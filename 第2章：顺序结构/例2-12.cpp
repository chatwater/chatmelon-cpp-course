#include <cstdio>
#include <cmath>
// using namespace std;
// 上学迟到
int main() {
    int s, v;
    scanf("%d%d", &s, &v); 
    //注意：ceil函数的作用是向上取整，返回大于或等于参数的最小整数
    //ceil(3)=ceil(2.9)=ceil(2.1)=3
    //两次类型转换，1.0*s是讲s变成了double类型，然后再除以v,得到的也是double类型
    //ceil函数的参数是double类型
    int t_walk = ceil(1.0*s/v)+10;  //计算走路的分钟数
    int from_zero = 60*(24+8) - t_walk; //计算从昨天零点到上学的分钟数
    int hh = (from_zero / 60) % 24;//计算今天0点的小时数
    int mm = from_zero % 60;//计算分钟
    printf("%02d:%02d", hh, mm); //输出格式为hh:mm,不足两位数前补0
    return 0;
}


/**
 * %02d 的格式说明：
 * %d：表示以十进制整数的形式输出。
 * 0：表示如果输出的数字位数不足指定的宽度（这里是 2），则在数字前面补零。
 * 2：指定输出的最小宽度为 2。如果数字只有 1 位，则在前面补 1 个零；如果数字有 2 位或更多，则按实际宽度输出，不会截断。
 * 
 * 例子：
 * printf("%02d", 5);   // 输出：05
 * printf("%02d", 12);  // 输出：12
 * printf("%02d", 123); // 输出：123
 */