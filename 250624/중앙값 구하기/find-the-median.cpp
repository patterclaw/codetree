#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c,med;
    cin >>a>>b>>c;
    med=a;
    if(a<b)
    {
        if(a<c && b<c)
        {
            med=b;
            cout <<med;
        }
        else if(a<c && b>c)
        {
            med=c;
            cout <<med;
        }
    }
    else//a>b
    {
        if(b<c && a<c)
        cout <<med;
        else if(b<c && a>c){
        med=c;
        cout <<med;}
    }
    return 0;
}