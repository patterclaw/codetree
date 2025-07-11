#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h[1000];
int w[1000];
class Person{
    public:
    int height;
    int weight;
    int number;
    Person(){}
    Person(int height,int weight,int number){
        this->height=height;
        this->weight=weight;
        this->number=number;
    }
};
bool cmp(const Person &a, const Person &b){
    if(a.height==b.height)
    {
        if(a.weight==b.weight)
            return a.number<b.number;
        return a.weight>b.weight;
    }
    return a.height>b.height;

}
int main() {
    cin >> N;
    Person p[1000];
    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        p[i]=Person(h[i],w[i],i+1);
    }
    sort(p,p+N,cmp);
    for(int i=0;i<N;i++){
        cout << p[i].height << " " << p[i].weight << " "<< p[i].number<< '\n';
    }
    // Please write your code here.

    return 0; 
}
