#include <iostream>

using namespace std;

int N;

int printsum(int n){
    return n*(n+1)/20;
}
int main() {
    cin >> N;
    int x=printsum(N);
    cout << x;
    // Please write your code here.

    return 0;
}