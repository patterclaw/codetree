#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, k;
string t;
string str[100];
string arr[100]={};
int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str,str+n);
    int cnt=0;
    for(int i=0;i<n;i++){
    string substring=str[i].substr(0,t.length());
    int a=substring.compare(t);
    if(a==0)
    arr[cnt++]=str[i];
    }
    cout << arr[k-1];
    // Please write your code here.

    return 0;
}