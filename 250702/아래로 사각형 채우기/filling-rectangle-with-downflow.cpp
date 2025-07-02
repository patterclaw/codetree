#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int arr[10][10]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           arr[i][j]=i+1+n*j;
             
        }
       
         
    }
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
         }
         cout <<'\n';
    }
    return 0;
}