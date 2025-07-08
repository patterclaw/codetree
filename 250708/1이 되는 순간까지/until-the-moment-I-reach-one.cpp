#include <iostream>

using namespace std;

int N;
int recur(int n){
    int cnt=0;
    if(n==1)
    return cnt;
    if(n%2==0){
        cnt++;
     return recur(n/2)+cnt;
        
    }
    else{cnt++;
    return recur(n/3)+cnt;
}}
int main() {
    cin >> N;
    cout << recur(N);
    // Please write your code here.

    return 0;
}