#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt=0;
    string a,b;
    cin >> a>>b;
    for(int i=0;i<a.length()-1;i++){
        if(a.substr(i,2)==b)
        cnt++;
    }
    cout <<cnt;
    // Please write your code here.
    return 0;
}