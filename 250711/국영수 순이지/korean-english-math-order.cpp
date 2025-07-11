#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class Student{
    public:
    string name;
    int korean;
    int english;
    int math;
    Student(string name,int korean,int english,int math){
        this->name=name;
        this->korean=korean;
        this->english=english;
        this->math=math;
    }
    Student(){}
};
bool cmp(const Student &a,const Student &b){
    if(a.korean==b.korean)
    {
        if(a.english==b.english)
            return a.math>b.math;
        return a.english>b.english;
    }
    return a.korean > b.korean;
}
int main() {
    int n;
    cin >> n;
    string name;
    int k,e,m;
    Student s[n];
    for (int i = 0; i < n; i++) {
        cin >>name >>k>>e>>m;
        s[i]=Student(name,k,e,m);
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
        cout << s[i].name << " " <<s[i].korean << " "<<s[i].english<< " "<<s[i].math<< '\n';
    }
    // Please write your code here.

    return 0;
}