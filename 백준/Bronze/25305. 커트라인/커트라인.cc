#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//좌표압축이란 좌표들을 순서에 맞게 자연수 등으로 대응 시켜서 나열하는 것인가?.
int main() {
	int N, k, x;

	cin >> N >> k;
	
	vector<int> v;

	while (N--) {
		cin >> x;

		v.push_back(x);
	}

	sort(v.begin(), v.end(),greater<>());

	cout << v[k-1];

}
