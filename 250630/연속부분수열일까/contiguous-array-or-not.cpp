#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n1,n2;
    cin >>n1 >>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        cin >>a[i];
    }
    for(int i=0;i<n2;i++){
        cin >>b[i];
    }
    int x=-1;
    for(int i=0;i<=n1-n2;i++){
        if(a[i]==b[0]){
            x=i;
            break;
        }
    }
    int cnt=0;
    if(x!=-1){
        for(int j=0;j<n2;j++){
            if(a[x+j]==b[j])
            cnt++;
            else
            break;
        }
    }
    if(cnt==n2){
        cout << "Yes";  
    }
    else
     cout << "No";
    return 0;
}