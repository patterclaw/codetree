#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=1;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<< cnt++ <<" ";
        }
        cout <<'\n';
   }
    return 0;
}