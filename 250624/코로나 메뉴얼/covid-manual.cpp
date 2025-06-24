#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a1,b1,c1;
    int a,b,c;
    int cnt=0;
    cin >>a1>>a>>b1>>b>>c1>>c;
    if(a1=='Y' && a>=37)
    cnt++;
    if(b1=='Y' && b>=37)
    cnt++;
    if(c1=='Y' && c>=37)
    cnt++;
    
    if(cnt>=2)
    cout << 'E';
    else 
    cout <<'N';
    


    return 0;
}