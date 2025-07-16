#include <iostream>
using namespace std;

int n;
int x[1000];
char dir[1000];
int white,black,gray;
int cnt1[200001];
int cnt2[200001];
char color[200001];

int main() {
    cin >> n;
    int start_pos;
    int end_pos;
    int curr_pos=100000;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        if(dir[i]=='R'){
            start_pos=curr_pos;
            end_pos=curr_pos+x[i];
            for(int j=start_pos;j<end_pos;j++){
            cnt2[j]++;
             if (color[j] == 'g') {
                    continue; 
                }
            color[j]='b';
            if(cnt1[j]>=2 && cnt2[j]>=2)
            color[j]='g';
            }
            curr_pos=end_pos-1;
        }
        else{
            start_pos=curr_pos-x[i]+1;
            end_pos=curr_pos+1;
            for(int j=start_pos;j<end_pos;j++){
            cnt1[j]++;
             if (color[j] == 'g') {
                    continue; 
                }
            color[j]='w';
            if(cnt1[j]>=2 && cnt2[j]>=2)
            color[j]='g';
            }
            curr_pos=start_pos;
        }
    }
    
    for(int i=0;i<200000;i++){
        if(color[i]=='w')
        white++;
        else if(color[i]=='b')
        black++;
        else if(color[i]=='g')
        gray++;
    }
    cout <<  white << " " <<black << " " <<gray;
    
    // Please write your code here.
    
    return 0;
}