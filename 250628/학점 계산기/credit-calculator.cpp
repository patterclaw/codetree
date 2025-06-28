#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    double arr[n]={};
    double avg=0;
    double sum=0;
     cout <<fixed;
    cout.precision(1);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
        avg=sum/n;
    }
    if(avg>=4.0){
        cout << avg <<endl <<"Perfect";
    }
    else if(avg>=3.0){
        cout << avg << endl << "Good";
    }
    else
        cout <<avg << endl << "Poor";
    return 0;
}