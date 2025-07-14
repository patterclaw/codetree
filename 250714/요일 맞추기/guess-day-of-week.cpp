#include <iostream>
#include <string>
using namespace std;

int m1, d1, m2, d2;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
string day_of_the_week[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int m=m1;
    int d=d1;
    int elapse_day=0;
    while(1){
        if((m1==m2 && d1<d2) || (m1<m2)){
        if(m==m2 && d==d2)
        break;
        elapse_day++;
        d++;
        if(d>month[m]){
            m++;
            d=1;
        }
        }
        else{
        if(m==m2 && d==d2)
        break;
        elapse_day--;
        d--;
        if(d==0){
            m--;
            d=month[m];
        }
        }
    }
    if(elapse_day>=0){
    int week1=elapse_day%7;
    string week=day_of_the_week[week1];
    cout << week;}
    else{
    int week2=elapse_day%7;
    string week=day_of_the_week[7+week2];
    cout << week;
    }
    // if(week==0)
    // cout << "Mon";
    // else if(week==1)
    // cout << "Tue";
    // else if(week==2)
    // cout << "Wed";
    // else if(week==3)
    // cout << "Thu";
    // else if(week==4)
    // cout << "Fri";
    // else if(week==5)
    // cout << "Sat";
    // else if(week==6)
    // cout << "Sun";


    // Please write your code here.

    return 0;
}