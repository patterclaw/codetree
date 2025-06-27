#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    // Please write your code here.
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout << "* ";
        }
              cout << '\n';  
    }

     for(int i=2;i<=n;i++){
         for(int j=i;j>=1;j--){
             cout << "* ";
         }
        cout << '\n';
     }
    return 0;
}