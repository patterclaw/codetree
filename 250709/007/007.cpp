#include <iostream>
#include <string>

using namespace std;

class Spy{
    public:
       string secret_code;
      char meeting_point;
        int time;
        
};
int main() {
    Spy spy=Spy();
    cin >>  spy.secret_code >> spy.meeting_point>>spy.time;
    cout << "secret code : "<< spy.secret_code << '\n';
    cout << "meeting point : "<< spy.meeting_point<< '\n';
    cout << "time : "<< spy.time<< '\n';
    
    // Please write your code here.

    return 0;
}