#include <iostream>

using namespace std;

int N;
int fact(int n){
    if(n==1)
    return 1;
    return fact(n-1)*n;
}
int main() {
    cin >> N;
    cout << fact(N);
    // Please write your code here.

    return 0;
}