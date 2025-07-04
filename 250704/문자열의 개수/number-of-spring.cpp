#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt=0;
    string s[200]={};
    int i=0;
    while(1){
        
        cin >>s[i];
        
        if(s[i]=="0")
        break;
        i++;
        cnt++;
    }
   
    cout << cnt <<'\n';
    for(int j=0;j<i;j+=2){
        cout << s[j] <<'\n';
    }
    // Please write your code here.
    return 0;
}