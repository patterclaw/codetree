#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int  a,b;
   
    cin >> a>> b;
     cout << a/b << ".";
     a=a%b;
        for(int  i=0;i<20;i++){
        a*=10;
        cout << a/b;
        a=a%b;
        }
    
    
    
    return 0;
}