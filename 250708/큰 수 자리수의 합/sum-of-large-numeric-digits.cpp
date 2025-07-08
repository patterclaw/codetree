#include <iostream>

using namespace std;

int a, b, c;

int sum(int n){
    if(n<10)
    return n;
    int remainder=n%10;
    return sum(n/10)+remainder;
}
int main() {
    cin >> a >> b >> c;
    int m=a*b*c;
    cout << sum(m);
    // Please write your code here.

    return 0;
}