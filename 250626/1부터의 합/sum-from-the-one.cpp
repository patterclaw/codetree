#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    int sum=0;
    for(int i=1;i<=n;i++){
       sum+=i;
        if(sum>=n){
            sum-=i;
          break;
        }
        
       
    }
    cout << sum;
    return 0;
}