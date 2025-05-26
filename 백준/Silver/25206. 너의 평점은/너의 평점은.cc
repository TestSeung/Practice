#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<string, float> m;

	m["A+"] = 4.5;
	m["A0"] = 4.0;
	m["B+"] = 3.5;
	m["B0"] = 3.0;
	m["C+"] = 2.5;
	m["C0"] = 2.0;
	m["D+"] = 1.5;
	m["D0"] = 1.0;
	m["F"] = 0.0;

	int num = 20;
	float sum = 0;
	float multi = 0;

	string word;
	while (num--) {
		getline(cin, word);
		if (word.back() == 'P') {
			continue;
		}
		if (word.back() == 'F') {
			sum += stof(word.substr(word.size() - 5, 3));
			continue;
		};
		sum += stof(word.substr(word.size() - 6, 3));
		multi += stof(word.substr(word.size() - 6, 3))*m[word.substr(word.size() - 2, 2)];
	}
	cout << multi / sum;


}