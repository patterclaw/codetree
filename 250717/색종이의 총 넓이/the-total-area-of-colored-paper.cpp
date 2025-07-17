#include <iostream>
#define OFFSET 100
using namespace std;

int N;
int x[100], y[100];
int area[201][201];
int sum;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        x[i]+=OFFSET;
        y[i]+=OFFSET;
        for(int j=x[i];j<x[i]+8;j++){
            for(int k=y[i];k<y[i]+8;k++){
                area[j][k]=1;
            }        
        }
    }
   
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            sum+=area[i][j];
        }
    }
    cout <<sum;
    // Please write your code here.

    return 0;
}