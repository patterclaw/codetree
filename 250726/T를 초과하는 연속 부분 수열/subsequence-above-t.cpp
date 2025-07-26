#include <iostream>
#include <algorithm>
using namespace std;

int n, t;
int arr[1000];
int cnt;
int cor;
int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>t)
        cnt++;
        else
        cnt=0;
        cor=max(cor,cnt);
    }
    cout <<cor;
    // Please write your code here.

    return 0;
}