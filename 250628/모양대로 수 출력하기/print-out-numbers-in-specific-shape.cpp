#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout << "  ";
        }
        for(int j=i;j>0;j--){
            cout<< j <<" ";
        }
        cout <<'\n';
   }
    return 0;
}