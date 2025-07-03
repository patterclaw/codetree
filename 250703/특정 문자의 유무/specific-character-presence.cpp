#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >>str;
    int length=str.length();
    bool e1=false;
    bool e2=false;
    for(int i=0;i<length-1;i++){
        if(str.substr(i,2)=="ee")
        e1=true;
        if(str.substr(i,2)=="ab")
        e2=true;
    }
    if(e1){
     cout <<"Yes" << " ";
    }
    else
    cout << "No"<< " ";
    if(e2){
        cout << "Yes";
    }
    else
    cout << "No";

    // Please write your code here.
    return 0;
}