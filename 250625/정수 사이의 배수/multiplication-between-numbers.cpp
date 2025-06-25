#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    int sum=0,cnt=0;
    double average=0;
    cin >>a>>b;
    cout<<fixed;
    cout.precision(1);
    for(int i=a;i<=b;i++){
        if(i%5==0 || i%7==0){
            sum+=i;
            cnt++;
        }
    }
    average=(double)sum/cnt;
    cout << sum <<" "<<average;
    return 0;
}