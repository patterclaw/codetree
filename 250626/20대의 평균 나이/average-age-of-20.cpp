#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0,cnt=0,a;
    double avg=0;
    while(1){
        cin >> a;
        if(a<20 || a>29)
        break;
        cnt++;
        sum+=a;

    }
    cout<<fixed;
    cout.precision(2);
    avg=(double)sum/cnt;
    cout << avg;
    return 0;
}