#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i*i;j++){
        if(j%i==0){
            cout << "* ";
        }
        else
        cout<< "*";

        }
    cout <<endl;
 }
    return 0;
}