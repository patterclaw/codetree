#include <iostream>
#include <string>
using namespace std;

string dirs;
int num=3;
int x=0,y=0;
int nx,ny;
int dx[4]={1,0,-1,0};
// 동 서 남 북
int dy[4]={0,1,0,1};
int main() {
    cin >> dirs;
    int len=dirs.length();
    for(int i=0;i<len;i++){
        if(dirs[i]=='L')
            num=(num+3)%4;        
        else if(dirs[i]=='R')
            num=(num+1)%4;
        else if(dirs[i]=='F')
            nx=x+dx[num],ny=y+dy[num];
            cout << nx<< ny<< " ";
    }
    cout << nx<<' '<<ny;
    // Please write your code here.

    return 0;
}