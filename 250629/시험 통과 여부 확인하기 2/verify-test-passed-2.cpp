#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int student[n]={};
    int a[n],b[n],c[n],d[n];
    double avg[n]={};
    int sum[n]={};
    for(int i=0;i<n;i++){
        cin >> a[i] >>b[i]>>c[i]>>d[i];
        sum[i]=a[i]+b[i]+c[i]+d[i];
        avg[i]=(double)sum[i]/4;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(avg[i]<60)
        cout << "fail\n";
        else{
        cout << "pass\n";
        cnt++;}
       
    }
    cout <<cnt;
    return 0;
}