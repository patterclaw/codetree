#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int  a,b,c;
    bool s=true;
    cin >> a>>b>>c;
    for(int i=a;i<=b;i++){
        if(i%c==0)//exist
        s=false;
    }
    if(!s)cout <<"NO";
    else cout << "YES";
    return 0;
}