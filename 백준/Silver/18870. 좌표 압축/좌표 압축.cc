#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

//좌표압축이란 좌표들을 순서에 맞게 자연수 등으로 대응 시켜서 나열하는 것인가?.
 int main() {
	int num;

	cin >> num;

	vector<int> v;
	int number;
	
	for (int i = 0;i < num;i++) {
		cin >> number;
		v.push_back(number);
	}
	
	vector<int> v1;
	v1 = v;

	sort(v1.begin(), v1.end());
	v1.erase(unique(v1.begin(), v1.end()), v1.end());

	unordered_map<int, int> m;
	for (int i = 0;i < v1.size();i++) {
		m[v1[i]] = i;
	}

	for (int i = 0;i < v.size();i++) {
		cout << m[v[i]] << ' ';
	}

}