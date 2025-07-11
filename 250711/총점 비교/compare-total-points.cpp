#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

class Student{
    public:
    string n;
    int s1,s2,s3;
    Student(){}
    Student(string name,int score1,int score2,int score3){
        this->n=name;
        this->s1=score1;
        this->s2=score2;
        this->s3=score3;
    }
};
bool cmp(const Student &a,const Student &b){
    return a.s1+a.s2+a.s3<b.s1+b.s2+b.s3;
}
int main() {
    cin >> n;
    Student s[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];
        s[i]=Student(name[i],score1[i],score2[i],score3[i]);
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
        cout << s[i].n <<" "<< s[i].s1<< " "<<s[i].s2 << " "<<s[i].s3<<'\n';
    }

    // Please write your code here.

    return 0;
}