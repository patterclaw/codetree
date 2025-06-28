#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    
    cin >>n;
    for(int i=0;i<n;i++){
        int m;
        int cnt=0;
        cin >>m;
        while(1){
    if(m==1)
    break;
    if(m%2==0){
        m=m/2;
    }
    else
    {
        m=m*3+1;
    }
    cnt++;
    
    }cout  << cnt <<endl;
    }
   return 0;
}