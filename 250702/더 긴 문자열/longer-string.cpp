#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1,s2;
    cin >>s1>>s2;
    int a=s1.length();
    int b=s2.length();
    if(a>b)
    cout << s1 << " "<<a;
    else if(a<b)
    cout << s2 << " "<<b;
    else
    cout <<"same";
    return 0;
}