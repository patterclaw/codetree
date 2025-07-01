#include <iostream>
using namespace std;

int main() {
    int arr[10]={};
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    int up[10]={};
    int down[10]={};
    for(int i=0;i<10;i++){
        if(arr[i]>500)
        up[i]=arr[i];
        else if( arr[i]<500)
        down[i]=arr[i];
    }
    int min=1001;
    int max=-1;
    for(int i=0;i<10;i++){
        if(up[i] !=0 && up[i]<min)
        min=up[i];
        else if(down[i] !=0 && down[i]>max)
        max=down[i];
    }
    cout << max<<" "<<min;
    // Please write your code here.
    return 0;
}