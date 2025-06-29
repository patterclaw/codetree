#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double score[8];
    cout << fixed;
    cout.precision(1);
    double avg=0;
    for(int i=0;i<8;i++){
        cin >> score[i];
        int sum=sum+score[i];
        avg=(double)sum/8;
    }
    cout << avg;
    return 0;
}