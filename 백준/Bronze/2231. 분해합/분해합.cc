#include<iostream>
#include<string>

using namespace std;


int main() {
	int num;

	cin >> num;

	int increase = 0;

	int sum=0;



	while (1) {
		
		sum = 0;

		string s = to_string(increase);

		for (char c : s) {

			int m = c - '0';
			sum += m;
		}


		if (increase + sum == num) {
			cout << increase;
			break;
		}
		
		else if(increase > num) {

			cout << 0;
			break;
		}

		increase++;
	}
	
}