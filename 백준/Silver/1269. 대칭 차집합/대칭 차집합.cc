#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> m;

	int a, b;

	cin >> a >> b;

	int i = a + b;

	while (i--) {
		int num;
		cin >> num;
		m[num]++;	
	}

	int cnt = 0;

	for (pair<int, int> p : m) {
		if (p.second == 1) {
			cnt++;
		}
	}

	cout << cnt;

}