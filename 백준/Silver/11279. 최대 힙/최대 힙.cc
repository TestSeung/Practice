#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
	priority_queue<int, vector<int>, less<int>> q;
	int num;
	int t;
	cin >> num;
	for (int i = 0; i < num; i++) {
		
		cin >> t;
		if(t!=0)
		q.push(t);
		if (t == 0)
		{
			if (!q.empty())
			{
				cout << q.top() << '\n';
				q.pop();
			}
			else {
				cout << 0 << '\n';
			}
		}	
	}
	return 0;
}