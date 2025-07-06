#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];
    int start=a[0];
    int index=-1;
    for(int i=0;i<n1;i++){
        if(b[0]==a[i]){
        start=a[i];//start=a[1]
        index=i;//index=1
        }
    }
    bool sub=true;
    for(int i=0;i<n2;i++){
        if(a[index++]!=b[i])
            sub=false;
        
    }
    if(sub)
    cout << "Yes";
    else
    cout <<"No";
    


    return 0;
}