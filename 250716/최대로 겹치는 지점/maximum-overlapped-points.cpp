#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int cnt[100];
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        for(int j=x1[i];j<=x2[i];j++){
            cnt[j]++;
        }
    }
    int max=-1;
    for(int i=0;i<=100;i++){
        if(cnt[i]>max)
        max=cnt[i];
    }
    cout <<max;
    // Please write your code here.

    return 0;
}