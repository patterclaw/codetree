#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a>>b;
    for(int i>=a;i<=b;i++){
        if(i%2!=0){
            cout << i << " ";
        }
    }
    return 0;
}