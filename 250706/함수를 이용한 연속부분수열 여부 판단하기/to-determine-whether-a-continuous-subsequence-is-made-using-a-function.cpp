#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];
    //int start=a[0];
    for(int i=0;i<n1-n2;i++)
    {   bool sub=true;// 00 01 02 10 11 12 20 21 22-> 0 1 2 1 2 3 2 3 4
        for(int j=0;j<n2;j++){
            if(a[i+j]!=b[j]){
                sub=false;
                break;
            }
        }
        if(sub){
        cout << "Yes";
        return 0;
        }
    }
    cout << "No";
    return 0;
}