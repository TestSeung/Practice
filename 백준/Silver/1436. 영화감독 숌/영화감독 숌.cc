#include<iostream>
#include<string>


using namespace std;

int main() {

	int num0 = 665;

	int num1;

	cin >> num1;

	int cnt = 0;

	while (1) {
		num0++;

		string s = to_string(num0);
		if (s.find("666")!=string::npos) {
			cnt++;
		}


		if (cnt == num1) {
			break;
		}
		
		
	}
	cout << num0;
}