#include<iostream>

using namespace std;

int main() {
	int x, y, w, h;
	cin >>  x >> y >> w >> h;
	int numX = x;
	int numY = y;

	if (x > w - x){
		numX = w - x;
	}
	if (y > h - y) {
		numY = h - y;
	}

	if (numX > numY) {
		cout << numY;
	}
	else cout << numX;
}