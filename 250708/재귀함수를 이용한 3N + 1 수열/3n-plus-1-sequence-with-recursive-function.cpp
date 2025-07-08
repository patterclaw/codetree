#include <iostream>

using namespace std;

int n;
int seqence(int a){
    if(a==1)
    return 0;
    if(a%2==0)
    return seqence(a/2)+1;
    else
    return seqence(a*3+1)+1;
}
int main() {
    cin >> n;
    cout << seqence(n);
    // Please write your code here.

    return 0;
}