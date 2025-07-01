#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    int arr[1000]={};
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        arr[nums[i]]++;
    }
    int max=-1;
    for (int i = 0; i < N; i++) {
        if(arr[nums[i]]==1){
            if(nums[i]>max){
                max=nums[i];
            }
        }
    }
   cout <<max;
    
    



    // Please write your code here.

    return 0;
}
