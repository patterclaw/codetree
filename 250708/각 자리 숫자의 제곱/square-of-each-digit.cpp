#include <iostream>

using namespace std;

int N;
int recur(int n){
    if(n<10)
    return n*n;
    return recur(n/10)+(n%10)*(n%10);
}
int main() {
    cin >> N;
    cout <<recur(N); 
    // Please write your code here.

    return 0;
}