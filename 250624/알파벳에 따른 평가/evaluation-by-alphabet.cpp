#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;
    if(c=='S')
    cout << "Superoir";
    else if(c=='A')
    cout << "Excellent";
    else if(c=='B')
    cout << "Good";
    else if(c=='C')
    cout << "Usually";
    else if(c=='D')
    cout << "Effort";
    else
    cout << "Failure";    
    return 0;
}