#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10]={};
    for(int i=0;i<10;i++){
        cin >> str[i];
    }
    for(int i=9;i>=0;i--){
        cout <<  str[i] << endl;
    }
    // Please write your code here.
    return 0;
}