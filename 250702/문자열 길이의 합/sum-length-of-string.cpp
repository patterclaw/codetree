#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >>n;
    string str[10]={};
    int l=0,la=0;
    for(int i=0;i<n;i++){
        cin >>str[i];
        l+=str[i].length();
        if(str[i][0]=='a')
        la++;
    }
    cout << l << " " <<la;
    // Please write your code here.
    return 0;
}