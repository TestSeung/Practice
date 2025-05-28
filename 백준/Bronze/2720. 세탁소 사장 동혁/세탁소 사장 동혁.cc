#include<iostream>

using namespace std;

int main(){

	int t,num;
	int q =0, d =0, n =0, p = 0;

	cin >> t;

	while (t--) {
		cin >> num;
		while (num != 0) {
			if (num - 25 >= 0) {
				num -= 25;
				q++;
			}
			else if (num - 10 >= 0) {
				num -= 10;
				d++;
			}
			else if (num - 5 >= 0) {
				num -= 5;
				n++;
			}
			else if (num - 1 >= 0) {
				num -= 1;
				p++;
			}
		}
		printf("%d %d %d %d\n", q, d, n, p);
		q = 0, d = 0, n = 0, p = 0;
	}
	
}