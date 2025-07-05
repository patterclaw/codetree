#include <iostream>

using namespace std;

int a, b;
bool num369(int x){
    while(x>0)
    {
        int d=x%10;
        if(d==3 || d==6 || d==9)
        return true;
        x=x/10;
    }
    return false;

}
bool magicNumber(int x){
    return (x%3==0 || num369(x));
}

int main() {
    cin >> a >> b;
    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        if(magicNumber(i))
        cnt+=1;
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}