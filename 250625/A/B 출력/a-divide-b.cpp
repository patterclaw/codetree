#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int  a,b,c;
    cin >> a>> b;
    for(int i=0;i<3;i++)
    {
        c=a/b;
        c+=((10*(b-a/b))/b)*0.1;
        
        
        
    }
    cout <<c;
    
    return 0;
}