#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[5]={ "apple","banana","grape","blueberry","orange"};
    int cnt=0;
    char c;
    cin >>c;
    for(int i=0;i<5;i++)
    {
        for(int j=2;j<4;j++){
            if(str[i][j]==c){
                cnt++;
            cout << str[i] << '\n';
        }}
    }
    cout <<cnt ;
    // Please write your code here.
    return 0;
}