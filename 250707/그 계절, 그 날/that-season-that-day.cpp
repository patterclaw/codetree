#include <iostream>
#include <string>
using namespace std;
//1 3 5 7 8 10 12
// 2 4 6 9 11
int Y, M, D;
bool leapYear(int y){
    if(y%4==0){
        if(y%100!=0)
        return true;
        if(y%100==0 && y%400==0)
        return true;
    }
    return false;
}
int lastday(int m){
    if(leapYear(Y)){
        if(m==2)
        return 29;
        if(m<=7){
            if(m%2==0)
            return 30;
            else 
            return 31;
        }
        else {
            if(m%2==0)
            return 31;
            else
            return 30;
        }
    }
    else{
        if(m==2)
        return 28;
        if(m<=7){
            if(m%2==0)
            return 30;
            else 
            return 31;
        }
        else {
            if(m%2==0)
            return 31;
            else
            return 30;
        }
    }
}
bool day(int m,int d){
    if(d<=lastday(M))
    return true;
    else 
    return false;
}
string season(int m){
    if(3<=m && m<=5)
        return "Spring";
    else if(6<=m && m<=8)
        return "Summer";
    else if(9<=m && m<=11)
        return "Fall";
    else 
        return "Winter";
}
int main() {
    cin >> Y >> M >> D;
    if(day(M,D)){
        cout << season(M);
    }else
        cout << -1;
    // Please write your code here.

    return 0;
}