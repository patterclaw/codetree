#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if((i%2==0) || (i%10==5) || (i%3==0 && i%9!=0))//온전수 아님
        continue;
        cout << i << " ";
    }
    return 0;
}