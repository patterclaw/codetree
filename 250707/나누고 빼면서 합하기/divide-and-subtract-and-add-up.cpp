#include <iostream>

using namespace std;

int n, m;
int A[100];
int sum=0;
void modifysum(int a[]){
        while(1){
            sum+=a[m-1];
            if(m%2==0){
                
                  m/=2;
            }
            else{
                  m-=1;
            }
            if(m==1){
                sum+=a[0];
                break;
            }
            
        }
}
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    modifysum(A);
    cout << sum;
    // Please write your code here.

    return 0;
}