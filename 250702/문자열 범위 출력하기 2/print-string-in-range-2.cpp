#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >>str;
    int n;
    cin >>n;
    for(int i=str.length()-1;i>=str.length()-n;i--){
        cout << str[i];
    }
    return 0;
}