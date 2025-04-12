#include <cstdio>
// using namespace std;
// ISBN
int main() {
    char a, b, c, d, e, f, g, h, i, j;
    int check;
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    // 字符 - '0'的意思是将字符转换为数字
    // 例如：'0' - '0' = 0，'1' - '0' = 1，'2' - '0' = 2，...，'9' - '0' = 9
    check = (a - '0') * 1 + (b - '0') * 2 + (c - '0') * 3 + (d - '0') * 4 + (e - '0') * 5 + (f - '0') * 6 + (g - '0') * 7 + (h - '0') * 8 + (i - '0') * 9;
    check %= 11; //相当于check = check % 11;
    if(j == 'X' && check == 10 || check == j - '0') {
        printf("Right");
    } else {
        // check==10?'X':check+'0'的意思是，如果check等于10，则输出'X'，否则输出check+'0'，即check的值加上字符'0'的ASCII码值
        printf("%c-%c%c%c-%c%c%c%c%c-%c", a, b, c, d, e, f, g, h, i, check==10?'X':check+'0');
    }

    return 0;
}