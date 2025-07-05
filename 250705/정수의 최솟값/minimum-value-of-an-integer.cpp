#include <iostream>

using namespace std;

int a, b, c;

int Min(int x,int y,int z){
    if(x<y){
        if(y<z)
        return x;
        else if(y>=z){
            if(x<z)
            return x;
            else
            return z;
        }
    }
    else{
        if(x<z)
        return y;
        else if(x>=z){
            if(y<z)
            return y;
            else
            return z;
        }
    }
    
}
int main() {
    cin >> a >> b >> c;
    int min=Min(a,b,c);
    cout << min;
    // Please write your code here.

    return 0;
}