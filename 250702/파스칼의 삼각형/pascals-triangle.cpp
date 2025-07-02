#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[15][15]={};
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            arr[i][j]=1;
            else if(i>=j)
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout  << arr[i][j] << " ";
        }cout << '\n';
    }
    return 0;
}