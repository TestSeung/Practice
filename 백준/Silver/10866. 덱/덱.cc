#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	deque<int>d;
	int n, x;
	cin >> n;
	string Function;

	while (n--)
	{
		cin >> Function;
		if ( Function== "push_back")
		{
			cin >> x;
			d.push_back(x);
		}
		else if ( Function=="push_front" )
		{
			cin >> x;
			d.push_front(x);
		}
		else if ( Function=="pop_front" )
		{
			if (d.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
		else if (Function== "pop_back" )
		{
			if (d.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << d.back() << '\n';
				d.pop_back();
			}
		}
		else if ( Function=="size" )
		{
			cout << d.size() << '\n';
		}
		else if ( Function=="empty" )
		{
			cout << d.empty() << '\n';
		}
		else if (  Function=="front")
		{
			if (d.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << d.front() << '\n';
			}
		}
		else if ( Function== "back")
		{
			if (d.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << d.back() << '\n';
			}
		}
	}
	return 0;
}
