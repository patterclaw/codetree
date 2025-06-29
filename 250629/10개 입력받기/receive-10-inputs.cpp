#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int cnt=0;
    int sum=0;
    double avg=0;
    cout<<fixed;
    cout.precision(1);
    for(int i=0;i<10;i++){
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]==0)
        break;
        cnt++;
    }
    avg=(double)sum/cnt;
    
        cout << sum<< " "<<avg;
    
    return 0;
}