#include <iostream>
#include <algorithm>
using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int arr[2001][2001];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    for(int i=0;i<2;i++){
        x1[i]+=1000;
        y1[i]+=1000;
        x2[i]+=1000;
        y2[i]+=1000;
    }
    for(int i=0;i<2;i++){
        for(int j=x1[i];j<x2[i];j++){
            for(int k=y1[i];k<y2[i];k++){
                arr[j][k]=i+1;
            }
        }
    }
    int min_x=2000;
    int max_x=0;
    int min_y=2000;
    int max_y=0;
    bool first=false;
    for(int x=0;x<=2000;x++) {
        for(int y=0;y<=2000;y++){
            if(arr[x][y]==1){
                first=true;
                min_x=min(min_x,x);
                max_x=max(max_x,x);
                min_y=min(min_y,y);
                max_y=max(max_y,y);
            }
        }
    } 
     int area;
    if(!first)
    area=0;
     else
     area=(max_x-min_x+1)*(max_y-min_y+1);
     cout << area;
}