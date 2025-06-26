#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int a=1;
    int i;
    cin >>n;
    for(i=1;i<=10;i++){
        a=a*2;
        if(n==a)
        break;
    }
    cout << i;
    return 0;
}