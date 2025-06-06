#include <iostream>

long long Euclidean(long long a, long long b);

int main() {
	long long num2, num3;
	
	std::cin >> num2 >> num3;

	if (num2 > num3) {
		long long temp = num2;
		num2 = num3;
		num3 = temp;
        }

	long long euclidean = Euclidean(num2, num3);

		
	std::cout<< num2 * num3 / euclidean << '\n';


}
long long Euclidean(long long a, long long b) {
	long long r = a % b;
	if (r == 0) {
		return b;
	}
	return Euclidean(b, r);
}