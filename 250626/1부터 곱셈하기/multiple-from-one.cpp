#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int prod=1;
    cin >> n;
    for(int i=1;i<=10;i++)
    {   
        prod*=i;
        if(prod>=n)
        {cout << i;
            break;}
        

    }
    return 0;
}