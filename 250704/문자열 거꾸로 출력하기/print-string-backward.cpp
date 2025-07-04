#include <iostream>
#include <string>
using namespace std;

int main() {
    while(1)
    {
        string s;
        cin >>s;
        if(s=="END")
        break;
        for(int i=s.length()-1;i>=0;i--){
            cout << s[i] ;
        }
        cout <<'\n';
    }
    // Please write your code here.
    return 0;
}