#include <iostream>

using namespace std;

int a, b;
bool prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0)
        return false;
    }
    return true;
}
int main() {
    cin >> a >> b;
    int sum=0;
    for(int i=a;i<=b;i++){
    if(prime(i))
        sum+=i;
    }
    cout <<sum;
    // Please write your code here.

    return 0;
}