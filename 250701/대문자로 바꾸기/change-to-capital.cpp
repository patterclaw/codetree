#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[5][3]={};
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout << char(arr[i][j]+('A'-'a')) << " ";
        }
        cout << '\n';
    }
    return 0;
}