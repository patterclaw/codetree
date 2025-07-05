#include <iostream>
#include <string>

using namespace std;

string str;

int main() {
    cin >> str;
    char c;
    int cnt=0;
    char curr_char=str[0];
    int num_char=1;
    string encoded="";
    for(int i=1;i<str.length();i++){
        if(str[i]==curr_char){
            num_char++;
        }else{
            encoded+=curr_char;
            encoded+=to_string(num_char);
            curr_char=str[i];
            num_char=1;
        }
    }
    encoded+=curr_char;
    encoded+=to_string(num_char);
    cout << encoded.length()<< '\n'<< encoded;
    

    // Please write your code here.

    return 0;
}
