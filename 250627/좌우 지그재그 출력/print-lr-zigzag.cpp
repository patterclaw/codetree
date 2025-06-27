#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cnt++;
            if(i%2==0){
                cout << cnt<< " ";
            }
            else{
                cout <<(i+1)*n-j<< " ";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
                
            }
        }
        cout <<'\n';
    }
    return 0;
}