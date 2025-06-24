#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    char m,w;
    cin >>a>>m>>b>>w;
    if((a>=19 && m=='M') || (b>=19 && w=='M'))
    cout <<1;
    else 
    cout <<0;
    return 0;
}