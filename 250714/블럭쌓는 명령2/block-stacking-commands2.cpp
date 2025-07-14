#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];
int arr[100];
int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        for(int j=A[i];j<=B[i];j++){
            arr[j]++;
        }   
    }
    int max=arr[0];
    for(int i=1;i<N;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << max;
    // Please write your code here.

    return 0;
}