#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    bool s=false;
    cin >>a>>b;
    for(int i=a;i<=b;i++){
        if(1920%i==0 && 2880%i==0)
        s=true;
    }
    if(s)
    cout << 1;
    else
    cout <<0;

    return 0;
}