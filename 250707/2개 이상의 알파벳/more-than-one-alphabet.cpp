#include <iostream>
#include <string>

using namespace std;

string A;
bool count(string &s){
    int cnt=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1])
        cnt++;
    }
    if(cnt>0){
        return true;
    }
    else
    return false;
}
int main() {
    cin >> A;
    if(count(A)){
        cout << "Yes";
    }
    else
    cout << "No";
    // Please write your code here.

    return 0;
}