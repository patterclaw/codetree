#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int cnt[200][200];
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        for(int j=x1[i];j<x2[i];j++){
            for(int k=y1[i];k<y2[i];k++){
                if(cnt[j][k]==0)
                cnt[j][k]++;
            }
        }
    }
    int sum=0;
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            sum+=cnt[i][j];
        }
        
    }
    cout <<sum;
    // Please write your code here.

    return 0;
}