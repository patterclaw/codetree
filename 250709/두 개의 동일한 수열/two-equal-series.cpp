#include <iostream>
#include <algorithm>
using namespace std;

int n;
int A[100];
int B[100];

bool sameElement(int a[],int b[]){
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
        return false;
    }
    return true;
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    if(sameElement(A,B))
    cout << "Yes";
    else
    cout << "No";
    // Please write your code here.

    return 0;
}