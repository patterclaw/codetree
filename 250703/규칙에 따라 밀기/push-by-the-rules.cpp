#include <iostream>
#include <string>
using namespace std;

int main() {
    string str,com;
    cin >>str >>com;
    for(int i=0;i<com.length();i++){
        if(com[i]=='L'){
            str=str.substr(1,str.length()-1)+str.substr(0,1);
        }
        else{
            str=str.substr(str.length()-1,1)+str.substr(0,str.length()-1);
        }
    }
    cout << str;
    // Please write your code here.

    return 0;
}