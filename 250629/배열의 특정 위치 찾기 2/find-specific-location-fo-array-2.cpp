#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10]={};
    int s1=0, s2=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
        if((i+1)%2==0)
        s1+=arr[i];
        else
        s2+=arr[i];
    }
    if(s1<s2){
        cout << s2-s1;
    }
    else
    cout << s1-s2;
    return 0;
}