#include <iostream>

using namespace std;

int n;
int a[1000];

int main() {
    cin >> n;
    int cnt=0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    int pos = n; // 현재 탐색할 구간의 끝 (처음엔 전체)

    while (true) {
    int max_val = -1, max_index = -1;

    for (int i = 0; i < pos; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
            max_index = i;
        }
    }

    cout << (max_index+1) << " "; // 1-based index 출력
    if (max_index == 0) 
    break; // 첫 번째 원소까지 왔으면 끝
    pos = max_index; // 탐색 범위를 왼쪽으로 좁힘
}
    return 0;
}
