#include <iostream>
#include <string>

using namespace std;

string A;

bool palindrome(string &a)
{   
    string x="";
    string y="";
    for(int i=0;i<a.length();i++){
        x+=a[i];
    }
    for(int i=a.length()-1;i>=0;i--){
        y+=a[i];
    }
    if(x==y){
        return true;
    }
    else
    return false;
}
int main() {
    cin >> A;
    if(palindrome(A))
    cout << "Yes";
    else
    cout << "No";
    // Please write your code here.

    return 0;
}