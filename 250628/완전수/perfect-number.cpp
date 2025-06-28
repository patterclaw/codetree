#include <iostream>

using namespace std;

int s, e;
int cnt =0;
int main() {
    cin >> s >> e;
    for(int i=s;i<=e;i++){
        
        int sum=0;
        for(int a=1;a<i;a++){
            if(i%a==0){
            sum+=a;
            }
        }
        if(sum==i)
        cnt++;
        
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}
