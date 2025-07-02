#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2,s3;
    cin >>s1 >>s2>>s3;
    int arr[3]={};
    arr[0]=s1.length();
    arr[1]=s2.length();
    arr[2]=s3.length();
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<3;i++){
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    cout << max-min;
    // Please write your code here.
    return 0;
}