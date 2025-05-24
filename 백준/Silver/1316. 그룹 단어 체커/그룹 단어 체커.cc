#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string word;
	int result = 0;
	string epic;



	while (n--) {
		cin >> word;
		bool flag = true;
		char temp = word[0];
		epic = "";
		epic += word[0];
		for (char c : word) {
			if (temp != c) {
				if (epic.find(c) != string::npos) {
					flag = false;
					break;
				}
				epic += c;
				temp = c;
			}
		}
		if (flag) {
			result++;
		}
	}

	cout << result;
}