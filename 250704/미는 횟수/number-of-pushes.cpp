#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >>a>>b;
    int cnt=0;
    if(a==b)
    {cout  << 0;
    return 0;}
    while(a.length()>cnt){
        a=a.substr(1,a.length()-1)+a.substr(0,1);
        cnt++;
        if(a==b)
        break;
    }
    if(cnt!=a.length())
    cout << cnt;
    else
    cout << -1;

    // Please write your code here.
    return 0;
}