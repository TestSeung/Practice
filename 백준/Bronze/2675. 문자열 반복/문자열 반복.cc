#include <iostream>

using namespace std;
int main() {
	int N;
	cin >> N;
	while (N--) {
		int a;
		cin >> a;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < a; j++) {
				cout << s[i];
			}
		}
		cout <<endl;
	}
}