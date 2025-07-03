#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    string str[10]={};
    string total={};
    for(int i=0;i<n;i++){
        cin >> str[i];
        total+=str[i];
    }
    cout << total;
    return 0;
}