#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10]={};
    int sum=0,cnt=0;
    double avg=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]>=250)
        break;
        cnt++;
        sum+=arr[i];

    }
    cout <<fixed;
    cout.precision(1);
    avg=(double)sum/cnt;
    cout << sum <<" "<< avg;
    return 0;
}