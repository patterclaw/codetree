#include <iostream>
#include <algorithm>
using namespace std;

int N, k;
int nums[1000];
void sorting(){
    sort(nums,nums+N);
}
int main() {
    cin >> N >> k;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    sorting();
    cout << nums[k-1];

    // Please write your code here.

    return 0;
}
