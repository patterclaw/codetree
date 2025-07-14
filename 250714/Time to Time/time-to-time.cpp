#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    int hour=a;
    int minute=b;
    int elapse_time=0;
    while(true){
        if(hour==c && minute==d)
        break;
        elapse_time++;
        minute++;
        if(minute==60)
        {
            hour++;
            minute=0;
        }
    }
    cout << elapse_time;
    // Please write your code here.

    return 0;
}