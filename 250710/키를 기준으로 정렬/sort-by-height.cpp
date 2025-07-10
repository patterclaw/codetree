#include <iostream>
#include <algorithm>
using namespace std;

int n;
class Student{
    public: 
    string name;
    int height;
    int weight;
    Student(string name,int height,int weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
    Student(){}
};
bool cmp(const Student &a,const Student &b){
    return a.height<b.height;
}
int main() {
    cin >> n;
    string name;
    int height;
    int weight;
    Student student[n];
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> height;
        cin >> weight;
        student[i]=Student(name,height,weight);
    }
    sort(student,student+n,cmp);
    for(int i=0;i<n;i++){
        cout << student[i].name << " " <<student[i].height << " " << student[i].weight << '\n';
    }
    
    // Please write your code here.

    return 0;
}