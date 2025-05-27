#include<iostream>
#include <stack>
#include <map>

using namespace std;

int main() {
	
	map<int,string> m;

	for (int i = 10;i < 36;i++) {
		m[i] = (char)i+'A'-10;
	}
	

	int n, b;
	stack<int>s;

	cin >> n >> b;
	int num = 0;

	while (n>=b) {
		num = n % b;
		s.push(num);
		n /= b;
	}
	s.push(n);

	while (!s.empty()) {
		
		if (s.top() > 9) {
			cout << m[s.top()];
		}
		else {
			cout << s.top();
		}

		s.pop();
	}

}