#include <iostream>

using namespace std;

int main() {
	int h, w, n, m;
	int count = 0;

	cin >> h >> w >> n >> m;

	for (int i = 0; i < h; i+=n+1) {
		for (int j = 0; j < w;j+=m+1) {
			count++;
		}
	}

	cout << count;
}