#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];
int x,y;
int nx,ny;
int a,b;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
        if(dir[i]=='E')
        nx=x+dist[i],ny=y;
        else if(dir[i]=='W')
        nx=x-dist[i],ny=y;
        else if(dir[i]=='S')
        nx=x,ny=y-dist[i];
        else if(dir[i]=='N')
        nx=x,ny=y+dist[i];
        a+=nx;
        b+=ny;
    }
    
    
    cout << a << ' ' <<b;
    
    // Please write your code here.

    return 0;
}