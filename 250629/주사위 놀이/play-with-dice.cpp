#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10]={};
    int cnt[7]={0};
    for(int i=0;i<10;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<10;i++)
    {// 1 <= arr[i] <= 6
        cnt[arr[i]]++;
    }
    for(int i=1;i<=6;i++){
        cout << i << " - " << cnt[i] <<'\n'; 
    }
    return 0;
}