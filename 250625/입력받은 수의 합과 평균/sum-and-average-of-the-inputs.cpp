#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int sum=0;
    double avg=0;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        sum+=a;

    }
    cout<<fixed;
    cout.precision(1);
    avg=(double)sum/n;
    
    cout << sum << " " << avg;
    return 0;
}