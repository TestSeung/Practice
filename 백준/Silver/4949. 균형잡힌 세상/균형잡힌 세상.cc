#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	
	while (true)
	{
		string word;
		getline(cin, word);
		
		if (word == ".") {
			break;
		}

		stack<char>s;
		bool flag = 0;
		for (int i = 0; i < word.length(); i++) {
			char c = word[i];

			if ((c == '(') || (c == '[')) {
				s.push(c);
			}
			else if (c == ')')
			{
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					flag = 1;
					break;
				}
			}
			else if (c == ']') {
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0 && s.empty()) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}