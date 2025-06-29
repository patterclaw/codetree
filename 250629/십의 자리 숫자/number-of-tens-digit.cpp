#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt[100]={};
    // Please write your code here.
    while(1){
        int i=0;
        cin >> arr[i];
        if(arr[i]>=10)
        cnt[arr[i]/10]++;
        if(arr[i]==0)
        break;
         i++;
    }
    for(int i=1;i<=9;i++){
        cout << i << " - "<< cnt[i]<<endl;
    }
    return 0;
}