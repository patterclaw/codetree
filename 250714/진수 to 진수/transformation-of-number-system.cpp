#include <iostream>

using namespace std;

int a, b;
string n;
int sum=0;
int num=1;
int main() {
    cin >> a >> b;
    cin >> n;
    int len=n.length();
    for(int i=len-1;i>=0;i--){
        int k=(n[i]-'0')*num;
        sum+=k;
        num*=a;
    }
    //cout <<sum;//십진수
    int cnt=0;
    int digit[20]={};
    cin >> n;
    while(1){
    if(sum<b){
        digit[cnt]=sum;
        break;
    }
    digit[cnt++]=sum%b;
    sum/=b;
    }
    for(int i=cnt;i>=0;i--)
    cout << digit[i];
    // Please write your code here.

    return 0;
}