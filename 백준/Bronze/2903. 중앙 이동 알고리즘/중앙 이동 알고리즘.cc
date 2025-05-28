#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num;

	cin >> num;
	int initNum = 4;

	int result = 0;
	int squareCnt = 1;

	for (int i = 0;i < num;i++) {
		result = initNum + (sqrt(squareCnt)+1)* sqrt(squareCnt)*2 + squareCnt;

		initNum = result;
		squareCnt *= 4;
	}
	cout << result;
}