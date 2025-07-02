#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    getline(cin,str);
    int n;
    cin >>n;
    if(n>str.length())
    n=str.length();
    
    for(int i=str.length()-1;i>=str.length()-n;i--)
        cout << str[i];
        
    
    return 0;
}