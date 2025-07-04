#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >>a>>b;
    
    cout <<stoi(a+b)+stoi(b+a);
    // Please write your code here.
    return 0;
}