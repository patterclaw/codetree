#include <iostream>

using namespace std;

int a, b;
void modify(int &x,int &y){
    if(a>b){
        a*=2;
        b+=10;
    }
    else{
        b*=2;
        a+=10;
    }
}
int main() {
    cin >> a >> b;
    modify(a,b);
    cout << a<< " "<<b;
    // Please write your code here.

    return 0;
}