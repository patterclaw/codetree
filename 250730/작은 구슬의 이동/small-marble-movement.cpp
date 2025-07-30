#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;
int dx[4]={0,1,-1,0};//동 남 북 서
int dy[4]={1,0,0,-1};

bool Range(int a,int b){
    return (1<=a && a<=n && 1<=b && b<=n);
}
int getdirection(char d){
    if(d=='R')
    return 0;
    else if(d=='L')
    return 3;
    else if(d=='U')
    return 2;
    else
    return 1;
}
int main() {
    cin >> n >> t;
    cin >> r >> c >> d;
    int x=r;
    int y=c;
    int move=getdirection(d);
    for(int i=0;i<t;i++){
        int nx=x+dx[move],ny=y+dy[move];
        if(!Range(nx,ny))
        move=3-move;
        else{
        x+=dx[move];
        y+=dy[move];}  
    }
    // Please write your code here.
    cout << x << " " << y;
    return 0;
}