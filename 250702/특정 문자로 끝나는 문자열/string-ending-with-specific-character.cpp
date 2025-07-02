#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10]={};
    char c;
    for(int i=0;i<10;i++){
        cin >> str[i];
    }
    cin >> c;
    int a=0;
    for(int i=0;i<10;i++){
        if(str[i][str[i].length()-1]==c){
        cout <<  str[i] << endl;
        a++;
        }
    }
    if(a==0)
    cout <<"None";
    
    // Please write your code here.
    return 0;
}