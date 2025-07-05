#include <iostream>

using namespace std;

int n, m;

void printgcd(int a,int b){
    int m1[100]={};
    int m2[100]={};
    for(int i=1;i<=a;i++){
        if(a%i==0)
            m1[i]=i;
            
    }
    
    for(int i=1;i<=b;i++){
        if(b%i==0){
         m2[i]=i;
        }
    }
    int min;
    if(a<b)
    min=a;
    else
    min=b;
    int maxi=1;
    for(int i=0;i<=min;i++){
        if(m1[i]!=0 && m1[i]==m2[i])
        maxi=i;
        
    }
    cout << maxi;
   
    
}

int main() {
    cin >> n >> m;
    printgcd(n,m);
    // Please write your code here.

    return 0;
}