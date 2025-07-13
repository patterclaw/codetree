#include <iostream>
#include <algorithm>
using namespace std;
int n;
string name[10];
int height[10];
int weight[10];
class Person{
    public:
    string name;
    int height;
    int weight;
    Person(string name,int height,int weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
    Person(){

    }
};
bool cmpName(const Person &a,const Person &b)
{   if(a.height==b.height)
    return a.weight>b.weight;
    return a.height<b.height;
}

int main() {
    cin >>n;
    Person person[n];
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        person[i]=Person(name[i],height[i],weight[i]);
    }
    sort(person,person+n,cmpName);
    for(int i=0;i<n;i++){
        cout << person[i].name << ' ' << person[i].height << ' ' << person[i].weight << '\n';
    }
   

    // Please write your code here.

    return 0;
}