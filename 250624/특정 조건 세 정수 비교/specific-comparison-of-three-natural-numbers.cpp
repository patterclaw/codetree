#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >>a>> b>>c;
    int min=a;
    if(min > b)
    min=b;
    else if(min >c)
    min=c;
    cout<<(a==min)<<'\n';
    cout <<(a==b && b==c && c==a);
    return 0;
}