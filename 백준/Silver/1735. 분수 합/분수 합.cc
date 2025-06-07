#include <iostream>

using namespace std;

int Euclidean(int a, int b);

int main() {
	int num1, num2, num3, num4;

	cin >> num1 >> num2 >> num3 >> num4;

	int numerator = num1 * num4 + num2 * num3;
	int denominator = num2 * num4;

	
	int temp = Euclidean(numerator, denominator);
	
	numerator /= temp;
	denominator /= temp;

	cout << numerator <<' ' << denominator;

}
int Euclidean(int a, int b) {
	int r = a % b;
	if (r == 0) {
		return b;
	}
	return Euclidean(b, r);
}