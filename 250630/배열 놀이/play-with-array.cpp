#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,q; 
    cin >>n>>q;
    int arr[n]={};
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<q;i++){
        int a,b,c;
        cin >> a >> b;
        if(a==1){
            cout << arr[b-1] << '\n';
        }
        else if(a==2){
            int index=0;
            for(int j=0;j<n;j++){
                if(arr[j]==b)
                {   index=j;
                    index++;
                    break;
                }
            }
            cout << index << '\n';
        }
        else if(a==3){
            cin  >> c;
            for(int j=b;j<=c;j++){
                cout << arr[j-1] << " ";
            }
            cout <<'\n';
        }
    }
    
    
    return 0;
}