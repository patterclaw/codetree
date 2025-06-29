#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int arr[100]={};
    arr[0]=1;
    arr[1]=n;
    int cnt=2;
    for(int i=2;i<100;i++){
        arr[i]=arr[i-1]+arr[i-2];
        cnt++;
        if(arr[i]>100)
        break;
        
    }
    for(int i=0;i<cnt;i++){
        cout << arr[i] << " ";
    }
    return 0;
}