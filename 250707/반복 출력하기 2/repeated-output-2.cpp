#include <iostream>

using namespace std;

int N;
void printHelloWorld(int n){
    if(n==0)
    return;
    printHelloWorld(n-1);
    cout << "HelloWorld\n"; 
}
int main() {
    cin >> N;
    printHelloWorld(N);
    // Please write your code here.

    return 0;
}