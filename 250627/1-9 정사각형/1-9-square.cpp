#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0;
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cnt++==9)
            cnt=0;
            cnt++;
            cout <<cnt;
        }
        cout <<'\n';
    }
    return 0;
}