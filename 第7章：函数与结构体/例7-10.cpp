#include <iostream>
#include <string>
using namespace std;
// 【题目】旗鼓相当的对手加强版：每门课程的分数差不超过5分，总分不超过10分，则为旗鼓相当的对手
// 知识点：结构体的使用
int n, x, ans;
struct student {
    string name;
    int chinese, math, english;
}
struct student a[MAXIN]; // 定义结构体数组
bool check(int x; int y; int z){
    return  x <= y + z && y <= x + z;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].chinese >> a[i].math >> a[i].english;
    }
    for (int i = 0; i < n; i++) { // 枚举第一个学生i
        for (int j = i + 1; j < n; j++) {  // 枚举第二个学生j
            if (check(a[i].chinese, a[j].chinese, 5) 
                && check(a[i].math, a[j].math, 5) 
                && check(a[i].english, a[j].english, 5)
                && check(a[i].chinese + a[i].math + a[i].english, a[j].chinese + a[j].math + a[j].english, 10)) {
                    cout << a[i].name << " " << a[j].name << endl;
            }
        }
    }
    return 0;
}

/**
 * 输入：
 * 3
 * 张三 140 135 130
 * 李四 138 133 128
 * 王五 120 125 130
 * 
 * 输出：
 * 张三 李四
 */