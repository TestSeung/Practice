#include <iostream>

using namespace std;



int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int input[10001] = { 0 };
	int num;

	int n;

	cin >> num;


	for (int i = 0;i < num;i++) {
		cin >> n;
		input[n]++;
	}

	for (int i = 1;i <10001;i++) {
		for (int j = 0;j < input[i];j++) {
			cout << i <<'\n';
		}
	}
}