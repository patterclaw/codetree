#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int arr[10]={};
    for(int i=0;i<n;i++)
    cin >> arr[i];
    int min=100;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>=arr[j])
            {
                if(arr[i]-arr[j]<min)
                min=arr[i]-arr[j];
            }
            else
            {
                if(arr[j]-arr[i]<min)
                min=arr[j]-arr[i];
            }
        }
    }
    cout << min;
    return 0;
}