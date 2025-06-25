#include <iostream>
using namespace std;

int main() {
    int a;
    int sum=0,cnt=0;
    double average=0;
    cout<<fixed;
    cout.precision(1);
    for(int i=0;i<10;i++){
        cin >> a;
        if(0<=a && a<=200)
        {sum+=a;
        cnt++;}
    }
    average=(double)sum/cnt;
    cout << sum << " " << average;
    return 0;
}