#include <iostream>
#include <vector>

using namespace std;

int main() {

	string s;
	vector<string>v;
	int temp = 0;


	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		v.push_back(s);
		if (temp < s.size())
			temp = s.size();
	}

	for (int i = 0; i < temp; i++)
	{
		for (int j = 0; j < v.size(); j++)
			if (i < v[j].size())
				cout << v[j][i];

	}
}
