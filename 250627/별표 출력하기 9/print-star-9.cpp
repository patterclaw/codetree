#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++)
        cout<< "  ";
        for(int j=0;j<2*i-1;j++)
        cout <<"* ";
        cout <<'\n';
    }
    // Please write your code here.
    return 0;
}