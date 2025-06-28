#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    char c='A';
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            
            if(c==('Z'+1))
            c='A';
            cout << c++ ;
            
        }
        cout <<'\n';
    }
    return 0;
}