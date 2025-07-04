#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z')
        cout << (char)tolower(str[i]);
        else
        cout << (char)toupper(str[i]);
    }
    // Please write your code here.
    return 0;
}