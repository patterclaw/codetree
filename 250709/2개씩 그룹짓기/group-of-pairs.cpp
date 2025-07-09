#include <iostream>
#include <algorithm>
using namespace std;

int N;
int nums[2000];
int arr[1000]={};
int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }
    sort(nums,nums+2*N);
    int a=2*N;
    for(int i=0,j=a-1;i<=(a-1)/2 && j>=a/2;i++,j--)
    arr[i]=nums[i]+nums[j];

    int max=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout  << max;
    // Please write your code here.

    return 0;
}
