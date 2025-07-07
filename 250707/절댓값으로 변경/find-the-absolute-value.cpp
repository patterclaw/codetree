#include <iostream>

using namespace std;

int n;
int arr[50];

void modify(int x[]){
    for(int i=0;i<n;i++){
        if(x[i]<0){
            x[i]=x[i]-2*x[i];
        }
    }
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    modify(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // Please write your code here.

    return 0;
}