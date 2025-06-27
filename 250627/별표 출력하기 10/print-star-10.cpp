#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=0;j<n-(i/2)+1;j++)
            cout<<"* ";
        }
        else{
            for(int j=0;j<i-j;j++)
            cout<<"* ";
        }
        cout<<'\n';
        
    }
    for(int i=n;i>=1;i--){
        if(i%2==0){
            for(int j=0;j<n-(i/2)+1;j++)
            cout<<"* ";
        }
        else{
            for(int j=0;j<i-j;j++)
            cout<<"* ";
        }
        cout<<'\n';
        
    }
    return 0;
}