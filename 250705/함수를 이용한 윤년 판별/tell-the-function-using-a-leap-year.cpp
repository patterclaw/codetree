#include <iostream>

using namespace std;

int y;

bool year(int a){
    if(a%4!=0)
    return false;
    if(a%100==0 && a%400!=0)
    return false;
    return true;
}
int main() {
    cin >> y;
    if(year(y))
    cout << "true";
    else
    cout << "false";
    // Please write your code here.

    return 0;
}