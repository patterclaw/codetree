#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    int prod=1;
    cin >> a>>b;
    for(int i=a;i<=b;i++)
    {
        prod=prod*i;
    }
    cout << prod;
    return 0;
}