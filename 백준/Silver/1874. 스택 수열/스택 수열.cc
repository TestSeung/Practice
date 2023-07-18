#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	stack<int> s;
	int N;
	cin >> N;
	vector<char> Answer;
	vector<int>input(N);
	int Number = 1;

	for (int i = 0; i < N; i++)
	{
		int a; cin >> a;
		if (!s.empty() && s.top() == a)
		{
			s.pop();
			Answer.push_back('-');
		}
		else if (Number <= a)
		{
			while (Number <= a)
			{
				s.push(Number++);
				Answer.push_back('+');
			}
			s.pop();
			Answer.push_back('-');
		}
		else if (!s.empty() && s.top() > a)
		{
			cout << "NO";
			return 0;
		}
	}
	for (auto x : Answer)
	{
		cout << x << "\n";
	}
	return 0;
}