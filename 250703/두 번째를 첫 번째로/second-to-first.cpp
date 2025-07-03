#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >>str;
    char c1=str[1];
    char c2=str[0];
    for(int i=0;i<str.length();i++){
        if(str[i]==c1)
        str[i]=c2;
    }
    cout <<str;
    // Please write your code here.
    return 0;
}