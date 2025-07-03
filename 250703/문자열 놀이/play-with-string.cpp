#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >>str;
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        if(a==1){
            int b,c;
            cin >>b >>c;
            char h=str[b-1];
            str[b-1]=str[c-1];
            str[c-1]=h;
            cout << str << '\n';
        }
        else if (a==2){
            char c1,c2;
            cin >>c1>>c2;
            for(int i=0;i<str.length();i++){
                if(str[i]==c1)
                str[i]=c2;
            }
            cout << str << '\n';
        }
    }
    // Please write your code here.
    return 0;
}