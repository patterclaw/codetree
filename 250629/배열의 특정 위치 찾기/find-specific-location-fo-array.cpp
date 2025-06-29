#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    int sum=0;
    for(int i=1;i<10;i+=2){
        sum+=arr[i];
    }
    double avg=0;
    cout << fixed;
    cout.precision(1);
    int sum1=0;
    for(int i=2;i<10;i+=3){
        
        sum1+=arr[i];
        
    }
    avg=(double)sum1/3;
    cout << sum<<" "<<avg;
    return 0;
}