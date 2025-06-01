#include <iostream>
#include <deque>

using namespace std;

void prime(int min, int max);

int main() {
	int num1,num2;
    
	cin >> num1 >> num2;

	prime(num1, num2);
	
}


void prime(int min,int max) {

	int cnt = 0;
	int sum = 0;
	deque<int> d;

	for (int i = min;i <= max;i++) {

		if (i == 1) continue;

		for (int j = 1;j < i;j++) {
			if (i % j == 0) {
				cnt++;
			}
		}
		
		if (cnt == 1) {
			
			d.push_back(i);
			sum += i;
		}
		
		cnt = 0;
	}
	if (d.empty()) {
		cout << -1;
		return;
	}

	cout << sum << '\n' << d.front();
	

}