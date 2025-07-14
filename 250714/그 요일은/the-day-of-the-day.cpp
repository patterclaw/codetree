#include <iostream>
#include <string>
using namespace std;

int m1, m2, d1, d2;
string A;
int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
//string day_of_the_week[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
int cnt=0;
int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;
    int distance;
    if(A=="Mon")
    distance=0;
    else if(A=="Tue")
    distance=1;
    else if(A=="Wed")
    distance=2;
    else if(A=="Thu")
    distance=3;
    else if(A=="Fri")
    distance=4;
    else if(A=="Sat")
    distance=5;
    else if(A=="Sun")
    distance=6;
    int m=m1;
    int d=d1;
    int elapse_time=0;
    while(1){
        if(m==m2 && d==d2)
        break;
        elapse_time++;
        d++;
        if(d>month[m]){
            m++;
            d=1;
        }
    }
    for(int i=0;i<=elapse_time;i++){
        int current_week=i%7;
        if(current_week==distance)
        cnt++;
    }
    cout <<cnt;

    // Please write your code here.

    return 0;
}