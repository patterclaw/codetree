#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0;
    cin >>n;
    int arr1[n]={};
    int arr2[n]={};
    for(int i=0;i<n;i++){
        cin >>arr1[i];
        if(arr1[i]%2==0){
            arr2[cnt]=arr1[i];
            cnt++;
        }
    }
    for(int i=0;i<cnt;i++){
        cout << arr2[i] << " ";
    }
    return 0;
}