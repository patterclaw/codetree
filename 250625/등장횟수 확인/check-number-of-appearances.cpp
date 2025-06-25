#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int count=0;

    for(int i=0;i<5;i++){
        cin >>n;
        if(!(n%2))
        count++;
    }
    cout <<count;
    return 0;
}