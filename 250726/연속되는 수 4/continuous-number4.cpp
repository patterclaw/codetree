#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1000];
int cnt;
int ans;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]>arr[i-1])
        cnt++;
        else
        cnt=1;
        ans=max(ans,cnt);
    }
    cout <<ans;
    // Please write your code here.

    return 0;
}