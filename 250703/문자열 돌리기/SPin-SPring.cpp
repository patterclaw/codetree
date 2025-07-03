#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >>s;
    int length=s.length();
    cout << s<< '\n';
    for(int i=0;i<length;i++){
        s=s.substr(length-1,1)+s.substr(0,length-1); 
        cout << s << '\n';
    }
    // Please write your code here.
    return 0;
}