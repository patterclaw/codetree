#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];
char color[200000];
int white,black;
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
                color[j]='b';
            }
            curr_pos=end_pos-1;
        }
        else{
            start_pos=curr_pos-x[i]+1;
            end_pos=curr_pos+1;
            for(int j=start_pos;j<end_pos;j++){
                color[j]='w';
            }
            curr_pos=start_pos;
        }
    }
    for(int i=0;i<200000;i++){
        if(color[i]=='w')
        white++;
        else if(color[i]=='b')
        black++;
    }
    cout << white << " " <<black;

    // Please write your code here.

    return 0;
}