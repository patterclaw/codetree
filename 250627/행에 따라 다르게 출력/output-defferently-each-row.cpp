#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a=0;  
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                a+=1;
                cout << a<< " ";
            }
            else
            {   a+=2;
                cout << a<< " ";
            }
        }
        cout <<'\n';
    }
    return 0;
}