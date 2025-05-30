#include <iostream>

using namespace std;

int main() {
	
	int num = 1 ;
	int n;

	cin >> n;

	while (n - num > 0) {
		n -= num;
		num++;
	}

	if (num % 2)cout << num + 1 - n << '/' << n;
	else cout << n << '/' << num + 1 - n;

}
	
