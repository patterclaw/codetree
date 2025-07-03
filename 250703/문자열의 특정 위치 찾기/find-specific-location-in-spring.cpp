#include <iostream>
#include <string>
using namespace std;

int main() {
    string str={};
    cin >>str;
    char c;
    cin >>c;
    int index=-1;
    if(str.find(c)!=string::npos){
        index=str.find(c);
    }
    if(index==-1){
        cout << "No";
    }
    else
    {
        cout << index;
    }
    // Please write your code here.
    return 0;
}