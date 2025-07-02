#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >>str;
    int n;
    cin >>n;
    if(n>str.length())
    n=str.length();
    int start=str.length()-1;
    int end=str.length()-n;
    for(int i=start;i>=end;i--)
        cout << str[i];
        
    return 0;
}