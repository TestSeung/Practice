#include<iostream>

using namespace std;

int main() {
	int num1;

	cin >> num1;

	int x, y;


	int maxX = -10000, maxY = -10000, minX = 10000, minY = 10000;

	
	while (num1--) {
		
		cin >> x >> y;

		if (x >= maxX) {
			maxX = x;
		}
		if (x <= minX) {
			minX = x;
		}
		if (y >= maxY) {
			maxY = y;
		}
		if (y <= minY) {
			minY = y;
		}
	}

	cout << (maxX - minX) * (maxY - minY);

}