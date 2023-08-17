#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    string str;
    getline(cin, str); 
    string border(str.length()+2,'+'); //7
    cout << border << endl;
    cout << "+" << str << "+" << endl;//Paiza
    cout << border << endl;
    return 0;
}