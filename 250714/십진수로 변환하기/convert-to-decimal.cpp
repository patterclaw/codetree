#include <iostream>

using namespace std;

char binary[9];
int sum=0;
int main() {
    cin >>binary;
    int num=1;
    int i=0;
    while(binary[i]!='\0'){
        i++;
    }
    int cnt=i;
    for(int i=cnt-1;i>=0;i--){
        int a=(binary[i]-'0')*num;
        sum+=a;
        num*=2;
    }
    cout <<sum;
  


    // Please write your code here.

    return 0;
}