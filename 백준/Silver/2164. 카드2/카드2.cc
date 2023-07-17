#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int N;
	cin >> N;
	queue<int> M;

	for (int i = 1; i <= N; i++)
	{
		M.push(i);
	}
	while (M.size() > 1)
	{
		M.pop();
		int front_card = M.front();
		M.pop();
		M.push(front_card);
	}

	cout << M.front();
	return 0;
}