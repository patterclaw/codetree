#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    cin >> score;
    string a;
    a= score == 100 ? "pass" : "failure";
    cout<< a;
    return 0;
}