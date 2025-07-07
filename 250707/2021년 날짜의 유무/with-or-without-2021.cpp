#include <iostream>

using namespace std;

int M, D;

bool ableMonth(int m){
    if(m<=12){
        return true;
        //1 3 5 7 8 10 12
        //2 4 6 9 11
    }
    return false;
}
bool ableDay(int m,int d){
    
    if(m<=7){
        if(m%2!=0 && d<=31)
        {
            return true;
        }
        else if(m%2==0 && m!=2 && d<=30)
        {
            return true;
        }
        else if(m==2 && d==28){
            return true;
        }
    }
    else if(m>7 && m<=12){
        if(m%2!=0 && d<=30)
        return true;
        else if(m%2==0 && d<=31)
        return true;
    }
return false;
}
int main() {
    cin >> M >> D;
    if(ableMonth(M) && ableDay(M,D)){
        cout << "Yes";
    }
    else
    cout << "No";
    // Please write your code here.

    return 0;
}