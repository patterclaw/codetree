#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,cnt=0;
    for(;;){
        cin >> a;
        if(a%2==0){
            cnt++;
            cout << a/2<<endl;
        }
        if(cnt==3)
        break;
    }
    return 0;
}