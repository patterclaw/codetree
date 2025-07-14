#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int elapse_day=0;
    int m=m1;
    int d=d1;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(1){
        if(m==m2 && d==d2)
        break;
        elapse_day++;
        d++;
        if(d>month[m])
        {
            m++;
            d=1;
        }
    }
    cout << elapse_day+1;
    // Please write your code here.

    return 0;
}