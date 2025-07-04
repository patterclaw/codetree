#include <iostream>

using namespace std;

int n, m;
void printstar(int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << '1';
        }
        cout << '\n';
    }
}
int main() {
    cin >> n >> m;
    printstar(n,m);
    // Please write your code here.

    return 0;
}