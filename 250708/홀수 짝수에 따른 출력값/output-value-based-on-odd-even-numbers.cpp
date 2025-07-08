#include <iostream>

using namespace std;

int N;
int S(int n){
    if(n%2==0){
        if(n==2)
        return 2;
    }
    else{
        if(n==1)
        return 1;
    }
    if(n%2==0)
    return S(n-2)+n;
    else
    return S(n-2)+n;
    
}
int main() {
    cin >> N;
    cout << S(N);
    // Please write your code here.

    return 0;
}