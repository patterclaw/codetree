#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int arr[n]={};
    
    for(int i=0;i<n;i++)
    {cin >>arr[i];
    
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
          max=arr[i];
    }
    cout << max;

    return 0;
}