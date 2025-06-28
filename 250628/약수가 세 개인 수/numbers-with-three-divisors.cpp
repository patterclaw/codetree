#include <iostream>

using namespace std;

int st, ed;
int sum=0;
int main() {
    cin >> st >> ed;
   
    for(int i=st;i<=ed;i++){
        int cnt=0;
        for(int j=1;j<=i;j++){
            
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt==3)
        sum++;
    }
    // Please write your code here.
    cout <<sum;

    return 0;
}
