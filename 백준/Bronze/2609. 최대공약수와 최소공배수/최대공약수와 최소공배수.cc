#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int result = 1;

	for (int i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0) {
			result = i;
		}
	}

	cout << result << "\n";
	result = a * (b / result);

	cout << result;
}