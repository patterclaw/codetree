#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            cout <<"("<< i << ","<<j<<") ";
        }
        cout <<'\n';
    }
    return 0;
}