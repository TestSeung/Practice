#include<iostream>

using namespace std;

int main() {

	int t,num;
	int q =0, d =0, n =0;

	cin >> t;

	while (t--) {
		cin >> num;
		
		if (num % 25 >= 0&&num>=25) {
			q = num / 25;
			num -= 25 * q;
		}
		if (num % 10 >= 0 && num >= 10) {
			d = num / 10;
			num -= 10 * d;
		}
		if (num % 5 >= 0 && num >= 5) {
			n = num / 5;
			num -= 5 * n;
		}
		
		printf("%d %d %d %d\n", q, d, n, num);
		q = 0, d = 0, n = 0;
	
	}
	
}