#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;
int num;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	
	cin >> num;

	for (int i = 0; i < num; i++) {
		int t;
		cin >> t;
		
		if (t == 0)
		{
			if (q.empty())
			{
				cout << 0 << '\n';
			}
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}	
		else {
			q.push(t);
		}
	}
	return 0;
}