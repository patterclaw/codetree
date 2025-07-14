#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    int hour=11;
    int day=11;
    int minute=11;
    int elapse_time=0;
    while(1){
        if(day==a && hour==b && minute==c){
            break;
        }
        elapse_time++;
        minute++;
        if(minute==60){
            hour++;
            minute=0;
        }
        if(hour==24){
           day++;
           minute=0;
           hour=0; 
        }
    }
    if(b<=11 && c<11){
        cout << -1;
    }
    else
    cout <<elapse_time;
    // Please write your code here.

    return 0;
}