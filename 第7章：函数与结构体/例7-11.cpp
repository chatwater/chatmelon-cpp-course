#include <iostream>
#include <string>
#define MAIN 1024
using namespace std;
// 【题目】评等级
// 知识点：结构体
int n, x, ans;
struct student {
    int id;
    int academic, quality;
    double overall;
    student(int _id, int _ac, int _qu){
        //这里的this->也可以省略
        this->id = _id;
        this->academic = _ac;
        this->quality = _qu;
        this->overall = 0.7 * _ac + 0.3 * _qu;
    }
    student(){}; //默认构造函数
    int sum(){
        //返回值也可写为 this->academic + this->quality
        return academic + quality; //返回总分
    }
};
int is_excellent(student s){
    // 访问成员变量与调用成员函数
    return s.overall >= 80 && s.sum() > 140;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp_id, temp_ac, temp_qu;
        cin >> temp_id >> temp_ac >> temp_qu;
        student one_student(temp_id, temp_ac, temp_qu);//创建一个结构体对象
        if(is_excellent(one_student)){
            cout << "优秀" << endl;
        }else{
            cout << "非优秀" << endl;
        }
    }
    return 0;
}

/**
 * 输入例子：
 * 3
 * 1 90 80
 * 2 85 75
 * 3 70 60
 * 
 * 输出例子：
 * 优秀
 * 优秀
 * 非优秀
 */