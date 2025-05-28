#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int num;

	cin >> num;
	int initNum = 4;

	int result = 0;
	int squarCnt = 1;
	int patton = 2;

	for (int i = 0;i < num;i++) {
		result = initNum + (sqrt(squarCnt)+1)* patton + squarCnt;

		initNum = result;
		squarCnt *= 4;
		patton *= 2;
	}
	cout << result;
}