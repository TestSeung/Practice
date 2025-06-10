#include<iostream>

using namespace std;


int main() {
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;
	int x = -999;
	int	y = -999;

	for (int i = x;i < 1000;i++) {
		for (int j = y;j < 1000;j++) {
			if (a * i + b * j == c && d * i + e * j == f) {
				cout << i <<' '<< j;
				
				break;
			}
		}
	}
}