#include <iostream>

using namespace std;

int main(){
	int a1, a0, c, n0;

	int n;

	cin >> a1 >> a0 >> c >> n0;

	n = n0;

	if (a1 * n + a0 <= c * n && a1 <= c) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}