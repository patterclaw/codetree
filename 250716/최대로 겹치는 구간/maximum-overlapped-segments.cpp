#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int cnt[201];

int main() {
    cin >> n;
    int max_index=-1;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        if(x2[i]>max_index)
        max_index=x2[i];
        for(int a=x1[i]+100;a<x2[i]+100;a++){
            cnt[a]++;
        }
    }
    
    int max=0;
    for(int i=1;i<max_index+100;i++){
        if(cnt[i]>max)
        max=cnt[i];
    }
    cout <<max;

    // Please write your code here.

    return 0;
}