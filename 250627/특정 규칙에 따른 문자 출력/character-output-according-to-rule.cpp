#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++)
        cout << "  ";
        for(int j=0;j<i;j++)
        cout << "@ ";
        cout <<'\n';
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++)
        cout << "@ ";
        for(int j=0;j<n-i;j++)
        cout << "  ";
        cout <<'\n';
    }
    // Please write your code here.
    return 0;
}