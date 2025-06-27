#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=1;
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(2*cnt>=10)
            cnt=1;
            cout << 2*cnt++ << " "; 
        }
        cout <<endl;
    }
    return 0;
}