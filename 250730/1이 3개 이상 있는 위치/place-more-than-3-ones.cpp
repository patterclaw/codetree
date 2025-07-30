#include <iostream>

using namespace std;

int n;
int grid[101][101];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
int x,y;
int anw;
bool Range(int a,int b,int size){
    return (1<=a && a<=size && 1<=b && b<=size);
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
        cin >> grid[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int cnt=0;
          for(int num=0;num<4;num++){
        int nx=i+dx[num];
        int ny=j+dy[num];
        if(Range(nx,ny,n) && grid[nx][ny]==1)
        cnt++;
        }
        if(cnt>=3)
        anw++;
        }
    }
    cout <<anw;
    // Please write your code here.

    return 0;
}