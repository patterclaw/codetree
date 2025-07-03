#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;
    int index=-1;

    if(input_str.find(target_str)!=string::npos){
        index=input_str.find(target_str);
    }
    
    cout <<index;
    // Please write your code here.

    return 0;
}
