#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int i=3;
    while(i<=n){
        if(i%3==0)
        {
        
         cout << i << " ";
         i+=3;
        }
    }
    return 0;
}