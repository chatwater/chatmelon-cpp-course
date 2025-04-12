#include <cstdio>
using namespace std;
// 三个数排序 解法2
// 分支嵌套
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >= c){
        if(b >= c){ printf("%d %d %d\n", c, b, a); }
        else { printf("%d %d %d\n", b, c, a); }
    }else if(b >= a && b >= c){
        if(a >= c){ printf("%d %d %d\n", c, a, b); }
        else { printf("%d %d %d\n", a, c, b); }
    }else{
        if(a >= b){ printf("%d %d %d\n", b, a, c); }
        else { printf("%d %d %d\n", a, b, c); }
    }
    return 0;
}

/*
 if(条件1){
    if(条件2){
        执行语句1;
    }else{
        执行语句2;
    }
 }else if(条件3){
    if(条件4){
        执行语句3;
    }else{
        执行语句4;
    }
 }else{
    if(条件5){
        执行语句5;
    }else{
        执行语句6;
    }
 }
*/