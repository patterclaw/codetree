#include <iostream>
#include <algorithm>
using namespace std;

int N;
int sequence[1000];
int score[1001];
class Sequence{
    public:
    int element;
    int number;
    Sequence(int element,int number){
        this->element=element;
        this->number=number;
    }
    Sequence(){}
};
bool cmp(const Sequence &a,const Sequence &b){
    if(a.element==b.element)
    return a.number<b.number;
    return a.element<b.element;
}
int main() {
    
    cin >> N;
    Sequence s[1000];
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        s[i]=Sequence(sequence[i],i+1);
    }
    sort(s,s+N,cmp);
    for(int i=0;i<N;i++){
        score[s[i].number]=i+1;
    }
    for(int a=1;a<=N;a++){
        cout << score[a] <<  ' ';
    }

    // Please write your code here.

    return 0;
}
