#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<char> left;
	stack<char> right;

	string N;
	int M;
	char FunctionKey;

	
	cin >> N;
	cin >> M;

	for (char c : N) {
		left.push(c);
	}

	for (int i = 0;i < M;i++) {
		cin >> FunctionKey;
		
		if (FunctionKey == 'L') {
			if (left.empty()) {
				continue;
			}
			right.push(left.top());
			left.pop();
			
		}
		else if (FunctionKey == 'D') {
			if (right.empty()) {
				continue;
			}
			left.push(right.top());
			right.pop();
		}
		else if (FunctionKey == 'B') {
			if (left.empty()) {
				continue;
			}
			left.pop();
		}

		else {
			char word;
			cin >> word;
			left.push(word);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}

}