#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >>a >>b;
    int arr[10];
    arr[0]=a;
    arr[1]=b;
    for(int i=2;i<10;i++){
        arr[i]=arr[i-1]+2*arr[i-2];
    }
    for(int i=0;i<10;i++)
    cout <<arr[i]<< " ";
    
    return 0;
}