#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int c=0;
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c++;
            cout <<c << " ";
        }
    cout <<endl;
    }
    return 0;
}