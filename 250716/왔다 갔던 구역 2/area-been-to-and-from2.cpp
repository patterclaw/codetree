#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int cnt[2001];
int offset=0;
int main() {
    cin >> n;
    int start_pos,end_pos;
    int curr_pos=1000;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        if(dir[i]=='R')
        {
            start_pos=curr_pos;
            end_pos=curr_pos+x[i];
            for(int j=start_pos;j<end_pos;j++){
                cnt[j]++;
            }
            curr_pos=end_pos;
        }
        else
        {
            start_pos=curr_pos-x[i];
            end_pos=curr_pos;
            for(int j=start_pos;j<end_pos;j++){
                cnt[j]++;
            }
            curr_pos=start_pos;
        }   
    }
    int a=0;
    for(int i=0;i<=2000;i++){
        if(cnt[i]>=2)
        a++;
    }
    cout << a;
    
    // Please write your code here.

    return 0;
}