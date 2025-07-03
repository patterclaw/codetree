#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >>s;
    
    s.erase(s.find('e'),1);
    cout <<s;
    // Please write your code here.

    return 0;
}