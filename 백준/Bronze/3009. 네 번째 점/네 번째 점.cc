#include <iostream>
#include <deque>


using namespace std;

int main() {
	int x, y;

	deque<int> dX(1000,0);
	deque<int> dY(1000,0);

	int num = 3;
	while (num--) {
		cin >> x >> y;

		dX[x]++;
		dY[y]++;
	}
	for (int i = 0;i < dX.size();i++) {
		if (dX[i] == 1) {
			cout << i << ' ';
		}
	}
	for (int i = 0;i < dY.size();i++) {
		if (dY[i] == 1) {
			cout << i;
		}
	}
	
}