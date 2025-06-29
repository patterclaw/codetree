#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100]={};
    int cnt=0;
    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==0)
        break;
        cnt++;
    }
    cout << arr[cnt-1]+arr[cnt-2]+arr[cnt-3];
    return 0;
}