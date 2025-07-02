#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[20]={};
    int n;
    cout<<fixed;
    cout.precision(2);
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    char c;
    cin  >>c;
    int cnt=0;
    int len=0;
     
    for(int i=0;i<n;i++){
        if(str[i][0]==c){
            cnt++;
            len+=str[i].length();
        }
    }
    cout <<cnt <<" "<<(double)len/cnt;
    // Please write your code here.
    return 0;
}