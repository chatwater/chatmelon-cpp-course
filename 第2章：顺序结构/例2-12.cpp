#include <cstdio>
#include <cmath>
// using namespace std;
// 上学迟到
int main() {
    int s, v;
    scanf("%d%d", &s, &v);
    //注意：ceil函数的作用是向上取整，返回大于或等于参数的最小整数
    //ceil(3)=ceil(2.9)=ceil(2.1)=3
    int t_walk = ceil(1.0*s/v)+10;  //两次类型转换，1.0*s/v是double类型，ceil函数的参数是double类型
    int from_zero = 60*(24+8) - t_walk; //计算从零点到上学的时间
    int hh = (from_zero / 60) % 24;//计算小时
    int mm = from_zero % 60;//计算分钟
    printf("%02d:%02d", hh, mm); //输出格式为hh:mm,不足两位数前补0
    return 0;
}