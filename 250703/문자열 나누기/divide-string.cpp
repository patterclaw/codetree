#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >>n;
    string str[10]={};
    string total={};
    for(int i=0;i<n;i++){
        cin >>str[i];
        total.append(str[i]);
    }
    for(int i=0;i<total.length();i++){
        cout <<total[i];
        if((i+1)%5==0)
        cout << '\n';
    }
    
    // Please write your code here.
    return 0;
}