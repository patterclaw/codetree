#include <iostream>

using namespace std;

int a;
int c;
char o;
bool correct(char ch){
    if(ch=='+' || ch== '-' || ch=='/' || ch=='*')
    return true;
    return false;
}
int calcul(int a,char o,int c){
    if(o=='+')
    return a+c;
    if(o=='-')
    return a-c;
    if(o=='/')
    return a/c;
    if(o=='*')
    return a*c;
}

int main() {
    cin >> a >> o >> c;
    if(correct(o))
    cout << a <<" "<<o <<" "<< c <<  " = " <<calcul(a,o,c);
    else
    cout << "False";
    // Please write your code here.

    return 0;
}