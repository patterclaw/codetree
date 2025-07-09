#include <iostream>
#include <string>

using namespace std;
class Code{
    public:
    string unlock_code;
char wire_color;
int seconds;
    Code(string unlock_code,char wire_color,int seconds){
        this->unlock_code=unlock_code;
        this->wire_color=wire_color;
        this->seconds=seconds;
    }

    
};


int main() {
    string c;
    char color;
    int sec;
    cin >> c >> color >>sec;
    Code code=Code(c,color,sec);
    cout << "code : " << code.unlock_code<< '\n';
    cout << "color : " << code.wire_color << "\n";
    cout << "second : " << code.seconds <<  '\n';
    // Please write your code here.

    return 0;
}