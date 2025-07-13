#include <iostream>
#include <algorithm>
using namespace std;

int N;
int x[1000];
int y[1000];

class Coordinate{
    public:
    int x;
    int y;
    int sum;
    int num;

    Coordinate(int x,int y,int sum,int num){
        this->x=x;
        this->y=y;
        this->sum=sum;
        this->num=num;
    }
    Coordinate(){}
};
bool cmp(const Coordinate &a,const Coordinate &b){
    if(a.sum==b.sum)
    return a.num<b.num;
    return a.sum<b.sum;
}

int main() {
    cin >> N;
    Coordinate c[1000];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        int abs1=x[i],abs2=y[i];
        if(x[i]<0)
        abs1=-x[i];
        if(y[i]<0)
        abs2=-y[i];
        int sum=abs1+abs2;
        c[i]=Coordinate(x[i],y[i],sum,i+1);
    }
    sort(c,c+N,cmp);
    for(int i=0;i<N;i++){
        cout << c[i].num << '\n';
    }
    // Please write your code here.

    return 0;
}
