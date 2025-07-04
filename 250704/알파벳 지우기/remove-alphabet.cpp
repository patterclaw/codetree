#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a>>b;
    string c={};
    string d={};
    for(int i=0;i<a.length();i++){
        if('0'<=a[i] && '9'>=a[i]){
            c+=a[i];
        }
    }
   for(int i=0;i<b.length();i++){
        if('0'<=b[i] && '9'>=b[i]){
            d+=b[i];
        }
    }
    cout <<stoi(c)+stoi(d);
    // Please write your code here.
    return 0;
}