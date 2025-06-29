#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int arr[n]={};
    int cnt[10]={0,};
    for(int i=0;i<n;i++){
        cin >>arr[i];
        cnt[arr[i]]++;
    }
    for(int i=1;i<10;i++)
    cout << cnt[i] << '\n';
    return 0;
}