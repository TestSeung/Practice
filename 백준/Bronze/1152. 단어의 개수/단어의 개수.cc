#include <iostream>
#include<string>

using namespace std;
int main() {
	string s;
	getline(cin, s);
	int count = 1;
	if (s.size() == 1 && s[0] == ' ')
		count = 0;
	else {
		for (int i = 1; i < s.size()-1;i++) {
			if (s[i] == ' ') {
				count++;
			}
		}
	}
	cout << count;
	return 0;
}