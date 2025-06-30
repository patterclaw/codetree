#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100]={};
    int cnt=0;
    for(int i=0;i<100;i++){
        cin >>arr[i];
        if(arr[i]==999 || arr[i]==-999)
        break;
        cnt++;
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<cnt;i++){
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }

    cout << max << " "<<min;
    return 0;
}