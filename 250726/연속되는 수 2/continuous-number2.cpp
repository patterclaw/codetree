#include <iostream>

using namespace std;

int N;
int arr[1000];
int cnt;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<N;i++){
        if(i==0 || arr[i]!=arr[i-1])
        cnt++;
    }
    cout <<cnt;
    // Please write your code here.

    return 0;
}