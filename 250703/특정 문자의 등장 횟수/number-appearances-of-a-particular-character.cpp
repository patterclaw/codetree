#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >>str;
    int c1=0, c2=0;
    
    // Please write your code here.
    for(int i=0;i<str.length()-1;i++){
        if(str.substr(i,2)=="ee")
        c1++;
        if(str.substr(i,2)=="eb")
        c2++;
    }
    cout << c1 << " " << c2;
    return 0;
}