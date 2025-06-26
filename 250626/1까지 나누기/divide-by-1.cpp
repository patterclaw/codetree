#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin >>n;
    for(int i=1;n>1;i++){
        n=n/i;//50나누기1=50,cnt=1 50나누기2는 25 카운트는 2
        ++cnt;
        
    }
    cout <<cnt;
    return 0;
}