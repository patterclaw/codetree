#include <iostream>

using namespace std;

int n, m;
int arr[100];

int printsum(int &x,int &y){
    int sum=0;
    for(int i=x-1;i<=y-1;i++){
        sum+=arr[i];   
    }  
    return sum;
    
}
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2; 
        cout << printsum(a1,a2)<< '\n';
    }
  
    // Please write your code here.

    return 0;
}