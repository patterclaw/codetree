#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;
    int cnt=0;
    getline(cin,s);
    cin >>c;
    for(int i=0;i<s.length();i++){
        if(s[i]==c)
        cnt++;
    }
    cout <<cnt;
    // Please write your code here.
    return 0;
}