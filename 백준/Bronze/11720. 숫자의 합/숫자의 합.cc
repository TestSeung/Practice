#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	string s;
	cin >> s;
	int result = 0;
	for (char c : s)
	{
		result += c - '0';
	}
	cout << result;
	return 0;
}
