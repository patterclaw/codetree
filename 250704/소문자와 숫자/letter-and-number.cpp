#include <string>
#include <cctype>
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >>str;
    for(int i=0;i<str.length();i++){
        
        if(str[i]>='A' && str[i]<='Z')
        cout << (char)tolower(str[i]);
        else if(str[i]>='a' && str[i]<='z' || str[i]>='0' && str[i]<='9')
        cout << str[i];   
        }
    // Please write your code here.
    return 0;
}