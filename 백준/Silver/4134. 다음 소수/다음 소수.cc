#include <iostream>
#include <vector>
#include <cmath> // std::sqrt
#include <algorithm> // std::max

// 모듈러 곱셈 (a * b) % mod 를 효율적으로 계산 (오버플로우 방지)
long long multiply(long long a, long long b, long long mod) {
    long long result = 0;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result + a) % mod;
        }
        a = (a * 2) % mod;
        b /= 2;
    }
    return result;
}

// 모듈러 거듭제곱 (base ^ exp) % mod 를 효율적으로 계산
long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) { // exp가 홀수면 res에 base를 곱함
            res = multiply(res, base, mod);
        }
        base = multiply(base, base, mod); // base를 제곱
        exp /= 2; // exp를 절반으로 나눔
    }
    return res;
}

// 밀러-라빈 테스트의 Witness 함수
// num이 소수인지 test_val (밑)을 기준으로 판별
bool millerRabinTest(long long num, long long test_val) {
    if (num <= 1) return false; // 0, 1은 소수 아님
    if (num == test_val) return true; // 테스트하는 숫자 자체가 test_val이면 소수

    long long d = num - 1;
    int s = 0;

    // num-1 = d * 2^s 형태로 만듦
    while (d % 2 == 0) {
        d /= 2;
        s++;
    }

    // test_val^d % num 계산
    long long x = power(test_val, d, num);

    if (x == 1 || x == num - 1) { // 1이거나 num-1이면 통과
        return true;
    }

    // 0부터 s-1까지 반복
    for (int r = 0; r < s - 1; ++r) {
        x = multiply(x, x, num); // x = x^2 % num
        if (x == num - 1) { // num-1이면 통과
            return true;
        }
    }

    return false; // 통과 못하면 합성수
}

// 소수 판별 함수
// 4 * 10^9까지의 수에 대해 정확하게 판별하기 위한 test_val 배열
// 이 test_val들은 n <= 4,759,123,141 에 대해 밀러-라빈 테스트를 확정적으로 만들기에 충분합니다.
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false; // 짝수는 소수가 아님 (2 제외)

    // 확정적 밀러-라빈 테스트를 위한 test_val (a 값)들
    // 일반적으로, 테스트할 수 n의 범위에 따라 사용하는 test_val들이 다릅니다.
    // 4*10^9까지는 2, 7, 61 세 값으로 충분합니다.
    long long test_vals[] = { 2, 7, 61 };
    for (long long test_val : test_vals) {
        if (!millerRabinTest(n, test_val)) {
            return false; // 합성수
        }
    }
    return true; // 소수
}

int main() {
    // 입출력 속도 향상
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    std::cin >> T; // 테스트 케이스 개수

    while (T--) {
        long long n;
        std::cin >> n;

        // n이 0 또는 1인 경우, 가장 작은 소수는 2
        if (n <= 1) {
            std::cout << 2 << "\n";
            continue;
        }

        // n부터 시작해서 소수를 찾을 때까지 반복
        while (true) {
            if (isPrime(n)) {
                std::cout << n << "\n";
                break;
            }
            n++; // 소수가 아니면 다음 숫자로
        }
    }

    return 0;
}