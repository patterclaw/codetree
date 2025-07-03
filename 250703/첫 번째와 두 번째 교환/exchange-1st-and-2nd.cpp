#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >>str;
    char c1=str[0];//c
    char c2=str[1];//o
    
    for(int i=0;i<str.length();i++){
        if(str[i]==c1) {
            str[i]=c2;
        }
        else if(str[i]==c2){
            str[i]=c1;
        }
    }
    cout <<str;
    // Please write your code here.
    return 0;
}