#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >>str;
    str=str.substr(1,str.length()-1)+str.substr(0,1);
    // Please write your code here.
    cout <<str;
    return 0;
}