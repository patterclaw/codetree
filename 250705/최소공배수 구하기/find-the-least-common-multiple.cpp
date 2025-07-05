#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

int printgcd(int n, int m) {
    int gcd = 0;
    for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0)
            gcd = i;
    }
    return gcd;
}
void printlcm(int a,int b){
    int gcd=printgcd(a,b);
    int c=a/gcd;
    int d=b/gcd;
    cout << c*d*gcd;
}
int main() {
    cin >> n >> m;
    printlcm(n,m);
    // Please write your code here.

    return 0;
}