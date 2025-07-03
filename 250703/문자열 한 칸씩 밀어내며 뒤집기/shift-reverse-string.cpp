#include <iostream>
#include <string>

using namespace std;
string str;
    int n;
int main() {
    
    cin >> str >> n;
    for(int i=0;i <n ;i++){
        int a;
        cin >> a;
        if(a==1){
            str=str.substr(1,str.length()-1)+str.substr(0,1);
            cout << str << '\n';
        }else if(a==2){
            str=str.substr(str.length()-1,1)+str.substr(0,str.length()-1);
            cout << str << '\n';
        }else if(a==3){
            for(int j=str.length()-1;j>=0;j--){
                cout << str[j];
            }
            cout << '\n'; 
        }
    }
  


    return 0;
}
