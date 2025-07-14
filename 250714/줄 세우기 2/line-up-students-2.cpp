#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h[1000];
int w[1000];
class Student{
    public: 
    int height;
    int weigth;
    int number;
    Student(int height,int weigth,int number){
        this->height=height;
        this->weigth=weigth;
        this->number=number;
    }
    Student(){}
};
bool cmp(Student a,Student b)
{   if(a.height==b.height)
    return a.weigth>b.weigth;
    return a.height<b.height;
}
int main() {
    cin >> N;
    Student s[1000];
    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        s[i]=Student(h[i],w[i],i+1);
    }
    sort(s,s+N,cmp);
    for(int i=0;i<N;i++){
        cout << s[i].height << ' '<<s[i].weigth << ' '<< s[i].number << '\n';
    }
    // Please write your code here.

    return 0;
}