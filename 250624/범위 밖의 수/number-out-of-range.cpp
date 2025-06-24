#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >>a;
    
    string s;
    s= (a<10 || a>20) ? "yes" : "no";
    cout <<s;
    return 0;
}