#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j+1==n)
            cout<< i+1 << " * "<<j+1 << " = "<< (i+1)* (j+1);
            else
            cout<< i+1 << " * "<<j+1 << " = "<< (i+1)* (j+1)<< ", ";
            
        }
        cout <<endl;
    }
    return 0;
}