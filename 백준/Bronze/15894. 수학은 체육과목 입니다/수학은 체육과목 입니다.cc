#include <iostream>

using namespace std;

int main() {
	long long num;
	cin >> num;
	long long result = 4;

	for (long long i = 1;i < num;i++) {
		result += -i + 3 +i+1;
	}
	
	cout << result;
}