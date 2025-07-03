#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int n;
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
            for(int j=0;j<str.length()/2;j++){
                char c=str[j];
                str[j]=str[str.length()-1-j];
                str[str.length()-1-j]=c;
            }
            cout << str;
            cout << '\n'; 
        }
    }
  


    return 0;
}
