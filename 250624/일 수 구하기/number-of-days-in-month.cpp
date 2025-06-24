#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    if(n%2!=0 || n==8)
    cout <<31;
    else if(n==2)
    cout <<28;
    else
    cout <<30;
    //if(n%4!=0 || (n%100==0 && n%400!=0))
    return 0;
}