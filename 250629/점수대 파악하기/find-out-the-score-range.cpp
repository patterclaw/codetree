#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int student[100]={};
    int cnt[11]={0};
    for(int i=0;i<100;i++){
        cin >>student[i];
        if(student[i]==0)
        break;
        cnt[student[i]/10]++;
    }
    for(int i=10;i>=1;i--){
        cout << i << "0 - " << cnt[i]<<endl;
    }
    return 0;
}