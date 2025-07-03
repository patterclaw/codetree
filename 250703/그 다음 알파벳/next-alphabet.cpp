#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;
    if(c!='z')
    cout << (char)(++c);
    else
    cout << 'a';
    return 0;
}