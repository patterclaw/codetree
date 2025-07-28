#include <iostream>

using namespace std;

int n,m,k;
int student[10000];

int main() {
    cin >> n >> m >> k;
    int arr[10000]={};
    for (int i = 0; i < m; i++) {
        cin >> student[i];
        arr[student[i]]++;
    }
    int anw=-1;
    for(int i=0;i<m;i++){
        if(arr[student[i]]>=k)
        {
            anw=student[i];
            break;
        }
    }
    cout <<anw;
    // Please write your code here.

    return 0;
}