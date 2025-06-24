#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int amath,aeng,bmath,beng;
    cin >>amath>>aeng>>bmath>>beng;
    if(amath >bmath)
    cout<< 'A';
    else if(amath<bmath) 
    cout <<'B';
    else{
        if(aeng>beng)
        cout <<'A';
        else
        cout <<'B';
    }


    return 0;
}