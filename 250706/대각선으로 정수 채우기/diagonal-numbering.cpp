#include <iostream>

using namespace std;

int n, m;

int main() {
    int a[100][100]={};
    int cnt=1;
    cin >> n >> m;

    for(int j=0;j<m;j++){
        int row=0;
        int col=j;
        while(col>=0 && row<n){
        a[row][col]=cnt;
        row++;
        col--;
        cnt++;}
    }
    for(int i=1;i<n;i++){
        int row=i;
        int col=m-1;
        while(col >=0 && row<n){
        a[row][col]=cnt;
        row++;
        col--;
        cnt++;}
    
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] <<  " ";
        }
        cout << '\n';
    }
    // Please write your code here.

    return 0;
}
