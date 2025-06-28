#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=1;
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=0;j<=n-i;j++){
            cout << i+j << " ";
        }
        cout <<endl;
    }
    return 0;
}