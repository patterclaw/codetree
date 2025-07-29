#include <iostream>
#include <string>
using namespace std;

int n, m;
int a[1000001];
int b[1000001];

int main() {
    cin >> n >> m;
    int ta=1;
    int tb=1;
    for (int i = 0; i < n; i++) {
       int t;
       char d;
       cin >> t>>d;
       while(t--){
       if(d=='R'){
        a[ta]=a[ta-1]+1;
       }
       else{
        a[ta]=a[ta-1]-1;
       }
       ta++;}
    }

    for (int i = 0; i < m; i++) {
       int t;
       char d;
       cin >> t>>d;
       while(t--){
       if(d=='R')
       b[tb]=b[tb-1]+1;
       else
       b[tb]=b[tb-1]-1;
       tb++;}
    }
   
    if(ta>tb){
    for(int i=tb;i<ta;i++)
    {
        b[i]=b[tb-1];
    }
    }
    else if(ta<tb){
        for(int i=ta;i<tb;i++){
            a[i]=a[ta-1];
        }
    }
    int pos=0;
    for(int i=1;i<tb;i++){
            if(a[i-1]!=b[i-1] && a[i]==b[i])
             pos++;
    }
   
    cout <<pos;
    // Please write your code here.

    return 0;
}