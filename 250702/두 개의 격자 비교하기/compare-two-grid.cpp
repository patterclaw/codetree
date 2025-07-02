#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin >> n>>m;
    int a[10][10]={};
    int b[10][10]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==b[i][j]){
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}