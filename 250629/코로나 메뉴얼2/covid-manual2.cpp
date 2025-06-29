#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char cold[3];
    int temp[3];
    int cnt[5]={};
    for(int i=0;i<3;i++){
        cin >> cold[i] >>temp[i];
        if(cold[i]=='Y' && temp[i]>=37){
            cnt[1]++;
        }
        else if(cold[i]=='N' && temp[i]>=37){
            cnt[2]++;
        }
        else if(cold[i]=='Y' && temp[i]<37){
            cnt[3]++;
        }
        else{
            cnt[4]++;
        }
    }
   
        for(int i=1;i<=4;i++)
        cout << cnt[i] << " ";
        if(cnt[1]>=2)
        cout <<  'E';
    
    return 0;
}