#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int start=str.length()-1;
    for(int i=start;i>=0;i--){
        if((i+1)%2==0)
        cout << str[i];
    }

    // Please write your code here.
    return 0;
}