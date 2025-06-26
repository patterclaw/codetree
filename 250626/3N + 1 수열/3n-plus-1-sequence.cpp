#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0;
    cin >> n;
    while(true){
        if(n==1)
        break;
        if(n%2==0){
            n/=2;
            cnt++;
            
        }
        else{
            cnt++;
            n=n*3+1;
            

        }
        
    }
    cout <<cnt;
    return 0;
}