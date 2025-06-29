#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,cnt=0;
    int mod[10]={};
    int c[10]={};
    cin >>a>>b;
    for(int i=0;i<10;i++){
        c[i]=a%b;
        cnt++;
        a=a/b;
        if(a<=1)
        break;  
    }
    int sum=0;
    for(int i=0;i<cnt;i++){
        mod[c[i]]++;
    }
    for(int i=0;i<10;i++)
    sum+=mod[i]*mod[i];
   
    cout << sum;
    return 0;
}