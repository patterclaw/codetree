#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin >>n;
        if(i%3==0 && i%2!=0){
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}