#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
// 算法竞赛试题案例：统计标题字数
// title.in文件作为输入流，输入字符串，title.out文件作为输出流，输出字符串长度
int main() {
  freopen("./第6章：字符串/例6-8/title.in", "r", stdin);    // 定义文件title.in为输入流
  freopen("./第6章：字符串/例6-8/title.out", "w", stdout);  // 定义文件title.out为输出流
  string s;
  int ans = 0;
  while (cin >> s) {
    ans += s.length();  // 统计输入流的字符串长度
  }
  cout << ans << endl;  // 把字符串长度作为输出流输出
  return 0;
}

/**
 * 这个题目比较简单，只是“用文件”作为输入和输出，然后题目还非常长，让人觉得难
 * title.in文件作为输入流，输入字符串，title.out文件作为输出流，输出字符串长度
 *
 * 输入1：
 * title.in文件内容：Hello world!
 * 输出2：（一个英文等于1个字符长度，所有11个字符长度，看来中间的空格没有算，当作的输入了2个字符串Hello和world!
 * 它们的长度和 5+6=11） title.out文件内容：11
 *
 * 输入2:
 * title.in文件内容：我爱中国
 * 输出2：（一个中文等于3个字符长度，所有4个汉字为12个字符长度）
 * title.out文件内容：12
 *
 */