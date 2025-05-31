#include<iostream>
#include <math.h>

using namespace std;

int main() {
	int A, B, V;

	cin >> A >> B >> V;
	int up = 0;

	up = (V-B) / (A - B);
	if (up * (A - B) < (V - B)) {
		up++;
	}

	cout << up;


}