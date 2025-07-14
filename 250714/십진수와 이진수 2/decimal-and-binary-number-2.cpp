#include <iostream>
#include <string>
using namespace std;

string N;

int main() {
    cin >> N;
    int sum=0,num=1;
    int len=N.length();
    for(int i=len-1;i>=0;i--){
        int a=(N[i]-'0')*num;
        sum+=a;
        num*=2;
    }
    sum*=17;

    int cnt=0;
    int digit[20]={};
    while(1){
    if(sum<2){
        digit[cnt]=sum;
        break;
    }
    digit[cnt++]=sum%2;
    sum/=2;
    }
    for(int i=cnt;i>=0;i--)
    cout << digit[i];
    // Please write your code here.

    return 0;
}