#include <iostream>
#include <string>
#include <algorithm>
#define MAX_N 10

using namespace std;

class Info{
    public:
    string name;
    string address;
    string region;
    Info(string name,string address,string region){
        this->name=name;
        this->address=address;
        this->region=region;
    }
    Info(){

    }
};

int main() {
    int n;
    cin >> n;
    Info info[n];
    string name,street_address,region;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> street_address;
        cin >> region;
        info[i]=Info(name,street_address,region);
    }
    int last=0;
    for(int i=1;i<n;i++){
        if(info[i].name>info[last].name)
        last=i;
    }
    cout << "name "<<info[last].name <<"\n";
    cout << "addr "<<info[last].address << '\n';
    cout <<"city "<<info[last].region << '\n';

    // Please write your code here.

    return 0;
}