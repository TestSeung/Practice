#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int N;
	int num;
	deque<int>d;
	cin >> N;
	int x;
	while (N--)
	{
		cin >> num;
		switch (num)
		{
		case 1:
			cin >> x;
			d.push_front(x);
			break;
		case 2:
			cin >> x;
			d.push_back(x);
			break;
		case 3:
			if (!d.empty()) {
				cout << d.front() << '\n';
				d.pop_front();
			}
			else {
				cout << -1 << '\n';
			}
			break;
		case 4:
			if (!d.empty()) {
				cout << d.back() << '\n';
				d.pop_back();
			}
			else {
				cout << -1 << '\n';
			}
			break;
		case 5:
			cout << d.size() << '\n';
			break;
		case 6:
			cout << d.empty() << '\n';
			break;
		case 7:
			if (!d.empty()) {
				cout << d.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
			break;
		default:
			if (!d.empty()) {
				cout << d.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
			break;
		}
	}
}
