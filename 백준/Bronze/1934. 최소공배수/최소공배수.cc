#include <iostream>
#include <deque>

int Euclidean(int a, int b);

int main() {
	int num1, num2, num3;
	std::cin >> num1;

	while (num1--) {
		std::cin >> num2 >> num3;

		if (num2 > num3) {
			int temp = num2;
			num2 = num3;
			num3 = temp;
		}

		int euclidean = Euclidean(num2, num3);

		
		std::cout<< num2 * num3 / euclidean << '\n';

	}


}
int Euclidean(int a, int b) {
	int r = a % b;
	if (r == 0) {
		return b;
	}
	return Euclidean(b, r);
}