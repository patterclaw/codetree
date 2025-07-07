#include <iostream>

using namespace std;

int n;
void printDecalStar(int n){
    if(n==0)
    return;
    for(int i=0;i<n;i++)
    cout << "* ";
    cout <<'\n';
    printDecalStar(n-1);
    for(int i=0;i<n;i++)
    cout << "* ";
    cout <<'\n';
}
int main() {
    cin >> n;
    printDecalStar(n);
    return 0;
}