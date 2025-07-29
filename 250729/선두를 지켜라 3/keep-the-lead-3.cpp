#include <iostream>

using namespace std;

int n, m;
int posa[1000001];
int posb[1000001];

int main() {
    cin >> n>>m;
    int ta=1;
    int tb=1;
    for(int i=0;i<n;i++){
        int v;
        int t;
        cin >>v>>t;
        while(t--){
                posa[ta]=posa[ta-1]+v;
                ta++;
        }
    }
    for(int i=0;i<m;i++){
        int t;
        int v;
        cin >>v>>t;
        while(t--){
            posb[tb]=posb[tb-1]+v;  
            tb++;
        }
    }
    int a=0;
    int leader=0;
    for(int i=0;i<ta;i++){
        if(posa[i]>posb[i]){
            if(leader==2){
                a++;
            }
            leader=1;
        }
        else if(posa[i]<posb[i]){
            if(leader==1)
            a++;
            leader=2;
        }
        else if(i!=0 && posa[i]==posb[i])
        a++;
    }
    cout << a;
    return 0;
}