#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int cnt[201][201];
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i]+=100;
        x2[i]+=100;
        y1[i]+=100;
        y2[i]+=100;
        for(int j=x1[i];j<x2[i];j++){
            for(int k=y1[i];k<y2[i];k++){
                if(cnt[j][k]==0)
                cnt[j][k]=1;
            }
        }
    }
    int sum=0;
    for(int i=0;i<201;i++){
        for(int j=0;j<201;j++){
            sum+=cnt[i][j];
        }
        
    }
    cout <<sum;
    // Please write your code here.

    return 0;
}