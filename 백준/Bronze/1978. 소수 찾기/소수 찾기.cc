#include <iostream>

using namespace std;

int primeCount(int prime);

int main() {
	int num, prime;
	int cnt = 0;

	cin >> num;

	while (num--) {
		cin >> prime;
		
		cnt += primeCount(prime);
	}

	cout << cnt;
}

int primeCount(int prime) {
	if(prime ==1) return 0;
	int cnt = 0;
	for (int i = 1;i < prime;i++) {
		if (prime % i == 0) {
			cnt++;
		}
	}
	if (cnt > 1) {
		return 0;
	}
	else {
		return 1;
	}
}