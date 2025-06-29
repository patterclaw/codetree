#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int cnt=0;
        for(int i=1;cnt!=2;i++){
            cout << n*i << " ";
            if(n*i%5==0)
            cnt++;
        }
    
    return 0;
}