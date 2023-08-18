#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int testN;
	int n, m;
	int importance;
	int count;
	cin >> testN;
	while (testN--)
	{
		count = 0;
		cin >> n >> m;

		priority_queue<int>pq;
		queue<pair<int, int>>q;

		for (int j = 0; j < n; j++)
		{
			cin >> importance;
			q.push({ j,importance });
			pq.push(importance);
		}

		while (!q.empty())
		{
			int location = q.front().first;
			int value = q.front().second;
			q.pop();

			if (pq.top() == value)
			{
				pq.pop();
				++count;
				if (m == location)
				{
					cout << count<<'\n';
					break;
				}
			}
			else q.push({ location,value });
		}
	}
	return 0;
}

