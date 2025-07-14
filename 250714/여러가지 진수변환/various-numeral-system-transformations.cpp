#include <iostream>

using namespace std;

int n;
int b;
int cnt=0;
int digit[20]={};
int main() {
    cin >> n >>b;
    while(1){
    if(n<b){
        digit[cnt]=n;
        break;
    }
    digit[cnt++]=n%b;
    n/=b;
    }
    for(int i=cnt;i>=0;i--)
    cout << digit[i];

    // Please write your code here.

    return 0;
}