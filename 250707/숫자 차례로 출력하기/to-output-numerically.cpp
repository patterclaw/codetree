#include <iostream>

using namespace std;

int N;
void printincrese(int n){
    if(n==0)
    return;
    printincrese(n-1);
    cout << n << " ";
}
void printdecrese(int n){
    if(n==0)
    return;
    cout << n << " ";
    printdecrese(n-1);
}
int main() {
    cin >> N;
    printincrese(N);
    cout << '\n';
    printdecrese(N);
    // Please write your code here.

    return 0;
}