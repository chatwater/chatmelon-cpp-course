#include <iostream>
#include <string>
using namespace std;
// 统计单词数
int main() {
    string word, s;
    // getline(cin, 字符串名称)表示将完整的一行的输入数据读入到字符串中，无论这一行是否有空格
    getline(cin, word); // 读入给定的单词
    getline(cin, s); // 读入给定的文章
    for ( int i = 0; i < s.length(); i++ ) {
        if( 'A' <= word[i] && word[i] <= 'Z' ){
            word[i] += 'a' - 'A'; // 给定的单词转换为小写字母
        }
    }
    for ( int i = 0; i < s.length(); i++ ) {
        if( 'A' <= s[i] && s[i] <= 'Z' ){
            s[i] += 'a' - 'A'; // 给定的文章转换为小写字母
        }
    }
    word = " " + word + " "; // 在给定的单词前后加上空格，防止多算
    s = " " + s + " "; // 在给定的文章前后加上空格，不然第一个单词会少算，最后一个单词会多算
    
    if (s.find(word) == -1){
        cout << -1 << endl;
    } else {
        int firstpos = s.find(word); // 找到第一个单词的位置
        int nextpos = s.find(word), cnt = 0; // 找到下一个单词的位置，计数器初始化为0
        while (nextpos != -1) { // 如果找到了单词
            cnt++; // 计数器加1
            nextpos = s.find(word, nextpos + 1); // 找到下一个单词的位置
            // nextpos + 1表示从下一个位置开始查找，防止重复计算
        }
        cout << cnt << " " << firstpos << endl; // 输出单词的个数和第一个单词的位置
        // 注意：位置是从0开始的，所以要加1
        // 如果要从1开始计数，可以将 cout << firstpos + 1 << endl; 改为 cout << firstpos << endl;
    }
    return 0;
}
/*
输入1：
hello
Hello world! Hello everyone. Hello!

输出1：（表示hello这个单词在文章中出现3次，第一次出现在第一个位置）
3 1


输入2：
notfound
This sentence does not contain the word you are looking for.

输出2：（表示notfound这个单词在文章中未出现）
-1
*/