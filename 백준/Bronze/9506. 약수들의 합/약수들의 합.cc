#include<iostream>
#include<deque>

using namespace std;

int main() {
	int num;
	int sum = 0;
	deque<int> d;

	while (1) {
		cin >> num;

		if (num == -1) {
			break;
		}

		for (int i = 1;i < num;i++) {
			if (num % i == 0) {
				sum += i;
				d.push_back(i);
			}
			
		}
		cout << num << ' ';

		if (sum == num) {
			cout << '=';
			for (int i = 0;i < d.size();i++) {
				if (i == d.size() - 1) {
					cout << ' ' << d[i] << '\n';
					break;
				}
				cout <<' '<< d[i] << ' ' << '+';
			}
			
		}
		else {
			cout << "is NOT perfect."<<'\n';
		}
		d.clear();
		sum = 0;
	}
}