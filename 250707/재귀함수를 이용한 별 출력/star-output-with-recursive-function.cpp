#include <iostream>

using namespace std;

int n;
void printStar(int n){
    if(n==0)
    return;
    printStar(n-1);
    for(int i=0;i<n;i++){
        cout << "*";
    }
    cout  << '\n';
}
int main() {
    cin >> n;
    printStar(n);
    // Please write your code here.

    return 0;
}