#include <iostream>

using namespace std;

int N;
void  printdecal(int n){
    if(n==0)
    return;
    cout << n<<" ";
    printdecal(n-1);
    cout << n << " ";
}
int main() {
    cin >> N;
    printdecal(N);
    // Please write your code here.

    return 0;
}