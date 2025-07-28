#include <iostream>

using namespace std;

int n, m;
int posa[1000001];
int posb[1000001];

int main() {
    cin >> n>>m;
    int ta=1;
    for(int i=0;i<n;i++){
        char d;
        int t;
        cin >> d>>t;
        while(t--){
            if(d=='R'){
                posa[ta]=posa[ta-1]+1;
            }
            else
                posa[ta]=posa[ta-1]-1;
            ta++;
        }
    }
    int tb=1;
    for(int i=0;i<m;i++){
        char d;
        int t;
        cin >>d >>t;
        while(t--){
            if(d=='R')
            posb[tb]=posb[tb-1]+1;
            else
            posb[tb]=posb[tb-1]-1;
            tb++;
        }
    }
    int ans=-1;
    for(int i=1;i<ta;i++){
        if(posa[i]==posb[i])
        ans=i
        break;
    }
    cout <<ans;

    return 0;
}