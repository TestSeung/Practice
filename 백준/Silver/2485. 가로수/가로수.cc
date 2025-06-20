#include <iostream>
#include <deque>

using namespace std;

int Euclidean(int a, int b) {
	int r = a % b;
	if (r == 0) {
		return b;
	}
	return Euclidean(b, r);
}

int main() {
	int num;

	cin >> num;

	deque<int> d(num);

	deque<int> distance;

	for (int i = 0;i < num;i++) {
		cin >> d[i];
	}
	
	for (int i = 0;i < num-1;i++) {
		distance.push_back(d[i+1] - d[i]);
	}
	int result = distance[0];
	
	for (int i = 0;i < distance.size()-1;i++) {

		result = Euclidean(result, distance[i + 1]);
	}

	int cnt = 0;
	for (int i = 0;i < distance.size() ;i++) {
		if (distance[i] - result > 0) {
			cnt += distance[i] / result - 1;
		}
	}

	cout << cnt;
}