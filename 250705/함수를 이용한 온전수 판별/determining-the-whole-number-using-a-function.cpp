#include <iostream>

using namespace std;

int a,b;
bool completeNumber(int a){
    if(a%2==0 || a%10==5 || (a%3==0 && a%9!=0))
    return false;

    return true;
}


int main() {
    int cnt=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(completeNumber(i)){
            cnt++;
        }
    }
    cout <<cnt;

    // Please write your code here.

    return 0;
}