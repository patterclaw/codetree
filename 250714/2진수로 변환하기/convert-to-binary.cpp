#include <iostream>

using namespace std;

int n;
int cnt=0;
int digit[20]={};
int main() {
    cin >> n;
    while(1){
    if(n<2){
        digit[cnt]=n;
        break;
    }
    digit[cnt++]=n%2;
    n/=2;
    }
    for(int i=cnt;i>=0;i--)
    cout << digit[i];

    // Please write your code here.

    return 0;
}