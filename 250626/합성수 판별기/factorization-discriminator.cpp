#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    bool s=false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        s=true;
    }
    if(s)
    cout << "C";
    else cout << "N";
    return 0;
}