#include <iostream>

using namespace std;

int n;
int arr[100];
int max(int x[]){
    int m=x[0];
    for(int i=1;i<n;i++){
        if(x[i]>m)
        m=x[i];
    }
    return m;
    
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << max(arr);

    // Please write your code here.

    return 0;
}