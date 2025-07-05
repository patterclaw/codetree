#include <iostream>

using namespace std;

int a, b;

bool prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0)
        return false;
    }
    return true;
}
bool even(int a){
    int sum=0;
    while(a>0){
        int d=a%10;
        sum+=d;
        a=a/10;
    }
    if(sum%2==0)
    return true;
    else
    return false;
}
int main() {
    cin >> a >> b;
    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        if(prime(i) && even(i))
        cnt++;
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}