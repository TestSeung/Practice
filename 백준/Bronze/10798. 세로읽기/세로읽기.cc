#include <iostream>
#include <vector>

using namespace std;

int main() {

	string s;
	vector<string>v;

	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		v.push_back(s);

	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < v.size(); j++)
			if (i < v[j].size())
				cout << v[j][i];

	}
	return 0;
}
