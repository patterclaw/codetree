#include <iostream>

using namespace std;

int a, b;
int printprod(int x,int y){
    int d=1;
    for(int i=1;i<=y;i++){
        d*=x;
    }
    return d;
}
int main() {
    cin >> a >> b;
    cout << printprod(a,b);
    // Please write your code here.

    return 0;
}