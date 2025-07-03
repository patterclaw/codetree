#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >>s;
    while(s.length()!=1){
        int n;
        cin >>n;
        if(n>=s.length()){
            n=s.length()-1;
        }
        s.erase(n,1);
        cout <<s << '\n';
    }
    return 0;
}