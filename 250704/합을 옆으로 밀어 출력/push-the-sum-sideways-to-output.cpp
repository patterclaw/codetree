#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        sum+=a;
    }
    string s=to_string(sum);
    s=s.substr(1,s.length()-1)+s.substr(0,1);
    cout <<s;
    // Please write your code here.
    return 0;
}