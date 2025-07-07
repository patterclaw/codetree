#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

bool exists(){
    if(text.find(pattern)!=string::npos)
    return true;
    
    else
    return false;
}
int main() {
    cin >> text;
    cin >> pattern;
    
    if(exists()){
        cout << text.find(pattern);
    }
    else
    cout << -1;
    return 0;
}