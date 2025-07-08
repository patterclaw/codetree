#include <iostream>

using namespace std;

int N;
int seqeunce(int a){
    if(a==1)
    return 1;
    if(a==2)
    return 2;
    return seqeunce(a/3)+seqeunce(a-1);
}
int main() {
    cin >> N;
    cout << seqeunce(N);
    // Please write your code here.

    return 0;
}