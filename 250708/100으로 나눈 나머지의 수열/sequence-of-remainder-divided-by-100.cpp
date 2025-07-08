#include <iostream>

using namespace std;

int N;
int remainder(int n){
    if(n==1)
    return 2;
    if(n==2)
    return 4;
    return (remainder(n-1)*remainder(n-2))%100;
}
int main() {
    cin >> N;
    cout <<remainder(N);
    // Please write your code here.

    return 0;
}