#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    if(n==2)
    cout <<28;
    else 
    {
        if(n<=7){
            if(n%2==0)
            cout << 30;
            else 
            cout <<31;
        }
        else{
            if(n%2==0)
            cout << 31;
            else 
            cout <<30;
        }
    }
    return 0;
}//1 3 5 7 8 10 12 //31
//2 4 6 9 11 //30