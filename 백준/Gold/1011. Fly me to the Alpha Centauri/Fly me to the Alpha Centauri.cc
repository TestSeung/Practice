#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int x, y;
        cin >> x >> y;

        int distance = y - x;
        int n = static_cast<int>(sqrt(distance)); // distance에 대한 가장 가까운 정수 제곱근 구하기

        if (n * n == distance) {
            cout << 2 * n - 1 << '\n'; // 완전 제곱수일 경우
        } else if (distance <= n * (n + 1)) {
            cout << 2 * n << '\n'; // n*(n+1) 범위 내
        } else {
            cout << 2 * n + 1 << '\n'; // (n+1)^2 범위 내
        }
    }

    return 0;
}