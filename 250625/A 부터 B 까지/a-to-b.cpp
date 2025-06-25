#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c=0;
    cin >>a>>b;
    for(int i=a;i<=b;i+=c){
        if(i%2){
        c=i;
        cout << i<< " ";}
        else{
        c=3;
        cout << i << " ";}
    }
    return 0;
}