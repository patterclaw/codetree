#include <iostream>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout << a[0] << " " << a[1];
    // Please write your code here.

    return 0;
}
