#include <iostream>
#include <algorithm>
using namespace std;

string name[5];
int height[5];
double weight[5];
class Person{
    public:
    string name;
    int height;
    double weight;
    Person(string name,int height,double weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
    Person(){

    }
};
bool cmpName(const Person &a,const Person &b)
{
    return a.name<b.name;
}
bool cmpHeight(const Person &a,const Person &b)
{
    return a.height>b.height;
}
int main() {
    cout <<fixed;
    cout.precision(1);
    Person person[5];
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        person[i]=Person(name[i],height[i],weight[i]);
    }
    sort(person,person+5,cmpName);
    cout << "name\n";
    for(int i=0;i<5;i++){
        cout << person[i].name << ' ' << person[i].height << ' ' << person[i].weight << '\n';
    }
    sort(person,person+5,cmpHeight);
    cout << "\nheight\n";
    for(int i=0;i<5;i++){
        cout << person[i].name << ' ' << person[i].height << ' ' << person[i].weight << '\n';
    }

    // Please write your code here.

    return 0;
}