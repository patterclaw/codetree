#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int  a;
    cin >>a;
    a=((a%3==0)||(a%5==0))?1:0;
    cout <<a;
    return 0;
}