#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << (11+2*i)+2*j << " ";
                    }
                    cout <<endl;
    }
    return 0;
}