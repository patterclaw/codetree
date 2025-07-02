#include <iostream>

using namespace std;

int n, m;

int main() {
    int arr[100][100]={};
    cin >> n >> m;
    int num=0;
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
            arr[j][i]=num++;
         }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            arr[j][i]=num++;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j]<< " ";
        }
        cout <<'\n';
    }

    // Please writ your code here.

    return 0;
}
