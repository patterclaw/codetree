#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a>>b>>c;
    bool s=false;

    for(int i=a;i<=b;i++){
        if(i%c==0)
        s=true;
        
    }
    if(s)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}