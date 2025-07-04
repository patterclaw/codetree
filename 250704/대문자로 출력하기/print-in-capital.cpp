#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
    if(str[i]>='a' && str[i]<='z')
      cout << (char)toupper(str[i]);
    else if(str[i]>='A' && str[i]<='Z')
      cout << str[i];
    }
    
    // Please write your code here.

    return 0;
}