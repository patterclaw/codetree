#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >>n>>m;
    int arr[n][m]={};
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=a++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j]<< " ";
        }
        cout << '\n';
    }
    // Please write your code here.
    return 0;
}