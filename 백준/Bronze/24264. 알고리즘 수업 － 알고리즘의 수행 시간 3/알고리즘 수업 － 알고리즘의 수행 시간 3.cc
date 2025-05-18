#include<iostream>

using namespace std;

int main() {
	int num;
	long long count=0;
	cin >> num;
	for (int i = 0;i < num;i++) {
		for (int j = 0;j < num;j++) {
			count++;
		}
	}
	cout << count << '\n';
	cout << 2;
}