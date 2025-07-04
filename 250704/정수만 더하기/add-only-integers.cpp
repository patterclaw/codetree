#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    cin >>str;
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if('0'<=str[i] && str[i]<='9')
            cnt+=str[i]-'0';
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}