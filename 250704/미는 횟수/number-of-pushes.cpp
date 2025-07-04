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
    while(cnt<a.length()){
        a=a.substr(1)+a[0];
        cnt++;
        if(a==b)
        break;
    }
    if(a==b)
    cout << cnt;
    else
    cout << -1;

    // Please write your code here.
    return 0;
}