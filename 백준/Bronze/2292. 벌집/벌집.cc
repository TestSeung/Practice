#include <iostream>
#include <map>

using namespace std;

int main() {
	int input;
	int result = 1;
	int room = 1;

	cin >> input;
	
	while (1) {

		if (input <= room) {
			break;
		}
		room += 6 * result;
		result++;
	}

	
	cout << result;
}