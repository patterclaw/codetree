#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    int arr[N]={};
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        arr[nums[i]]++;
    }
    int max=0;
    for (int i = 0; i < N; i++) {
        if(arr[nums[i]]==1){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        
    }
    if(max!=0)
    cout << max;
    else 
    cout << -1;
    
    



    // Please write your code here.

    return 0;
}
