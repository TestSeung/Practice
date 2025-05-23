#include <iostream>

using namespace std;

int main() {

	int time[27] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	
	string input;
	cin >> input;
	int result =0;
	for (char c : input) {
		result += time[c-'A'];
	}

	cout << result;
}
