#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];
bool isSame(int n){
    for(int i=0;i<n2;i++){
        if(a[i+n]!=b[i])
        return false;
    }
    return true;
}

bool subSequence(){
    for(int i=0;i<=n1-n2;i++){
        if(isSame(i))
            return true;
    }
    return false;
}
int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];
    
    if(subSequence())
    cout << "Yes";
    else
    cout << "No";
   
    return 0;
}