#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >>n;
    for(int i=n;i>=1;i--){
        for(int j=0;j<n-i;j++)
        cout<< "  ";
        for(int j=0;j<2*i-1;j++)
        cout << "* ";
        cout <<'\n';
    }
    return 0;
}