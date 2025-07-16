#include <iostream>
#define OFFSET 1000
using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int area[2001][2001];
int sum;
int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];//A
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];//B
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];//M
    for(int i=0;i<3;i++){
        x1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y1[i]+=OFFSET;   
        y2[i]+=OFFSET;
    }
    for(int k=0;k<2;k++){
        for(int i=x1[k];i<x2[k];i++){
            for(int j=y1[k];j<y2[k];j++){
            area[i][j]++;
            sum+=area[i][j];
            }
        }
    }
     for(int i=x1[2];i<x2[2];i++){
            for(int j=y1[2];j<y2[2];j++){
            area[i][j]++;
            if(area[i][j]>1){
                sum--;
            }
            }
        }
    
    cout << sum;
    // Please write your code here.

    return 0;
}