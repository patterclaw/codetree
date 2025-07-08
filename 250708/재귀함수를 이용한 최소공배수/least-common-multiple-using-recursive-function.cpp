#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm_all(int arr[], int n) {
    if (n == 1) return arr[0];
    int prev = lcm_all(arr, n - 1);
    return (prev * arr[n - 1]) / gcd(prev, arr[n - 1]);
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << lcm_all(arr, n);
    return 0;
}
