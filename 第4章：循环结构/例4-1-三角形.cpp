#include <iostream>
using namespace std;
int main() {
    for(int i=1; i<=10; i++){
        for(int j=1;j<=i;j++){
            cout << '*';
        }
        cout<<endl;
    }
    return 0;
}

/**
执行解构：
（1）i的第一次循环
i=1; 
j=1;
if(j<=i){
    cout << '*'; 
}
j++; //j=2
if(j<=i){ //不满足，所以不执行{ }
    cout << '*'; 
}
cout<<endl;
i++; //i=2

（2）i的第二次循环
j=1;
if(j<=i){
    cout << '*'; 
}
j++; //j=2
if(j<=i){
    cout << '*'; 
}
j++; //j=3
if(j<=i){  //不满足，所以不执行{ }
    cout << '*'; 
}
cout<<endl;
i++; //i=3;

(3) i的第三次循环
*/


/**
输出：

*
**
***
****
*****
******
*******
********
*********
**********


 */