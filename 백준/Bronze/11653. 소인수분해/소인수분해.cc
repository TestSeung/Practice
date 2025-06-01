#include <iostream>

using namespace std;

int main() {
	int num;

	cin >> num;

	int primeNumber = 2;

	while (num != 1) {
		
		if (num % primeNumber != 0) {
			primeNumber++;
			continue;
		}
		cout << primeNumber<<' ';
		num /= primeNumber;
		
	}
}