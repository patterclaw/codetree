#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;
    if(c!='a')
    cout << (char)(--c);
    else
    cout << 'z';
    return 0;
}