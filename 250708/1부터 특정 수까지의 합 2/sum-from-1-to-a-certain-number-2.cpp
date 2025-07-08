#include <iostream>

using namespace std;

int N;
int factorial(int n){
    if(n==0)
    return 0;
    return factorial(n-1)+n;
}
int main() {
    cin >> N;
    cout << factorial(N);
    // Please write your code here.

    return 0;
}