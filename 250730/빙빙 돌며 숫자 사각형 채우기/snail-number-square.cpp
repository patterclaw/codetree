#include <iostream>

using namespace std;

int n, m;
int arr[101][101];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int x=1;
int y=1;
int num=0;
bool Range(int a,int b){
    return(1<=a && a<=n && 1<=b && b<=m);
}
int main() {
    arr[x][y]=1;
    cin >> n >> m;
    for(int i=2;i<=n*m;i++){
        int nx=x+dx[num];
        int ny=y+dy[num];
        if(!Range(nx,ny) || arr[nx][ny]!=0)
        num=(num+1)%4;
        x=x+dx[num];
        y=y+dy[num];
        arr[x][y]=i;
    }    // Please write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}