#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin  >> a >> b;
    int c=a.length(),d=b.length();
    for(int i=0;i<a.length();i++){
        if(!('0'<=a[i] && '9'>=a[i])){
            c=i;
            break;
        }
    }
    a=a.substr(0,c);
    for(int i=0;i<b.length();i++){
        if(!('0'<=b[i] && '9'>=b[i]))
       {
        d=i;
        break;
       }
    }
    b=b.substr(0,d);
    cout << stoi(a)+stoi(b);
    // Please write your code here.
    return 0;
}