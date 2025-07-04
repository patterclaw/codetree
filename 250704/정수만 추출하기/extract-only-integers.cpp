#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin  >> a >> b;
    int c=0,d=0;
    for(int i=0;i<a.length();i++){
        if('0'<=a[i] && '9'>=a[i])
        c=a.find(a[i]);
        else
        break;
    }
    a=a.erase(c+1,a.length()-(c+1));
    for(int i=0;i<b.length();i++){
        if('0'<=b[i] && '9'>=b[i])
        d=b.find(b[i]);
        else
        break;
    }
    b=b.erase(d+1,b.length()-(d+1));
    cout << stoi(a)+stoi(b);
    // Please write your code here.
    return 0;
}