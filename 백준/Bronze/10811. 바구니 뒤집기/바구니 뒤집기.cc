#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int PocketI, PocketJ;
	int Min, Max;
	cin >> PocketI >> PocketJ;
	vector<int>v(PocketI);
	for (int i = 0; i < PocketI; i++)
	{
		v[i] = i + 1;
	}

	for (int i = 0; i < PocketJ; i++)
	{
		cin >> Min >> Max;
		
		reverse(v.begin() + Min - 1, v.begin() + Max);
	}

	for (int i = 0; i < PocketI; i++)
	{
		cout << v[i]<<" ";
	}

	return 0;
}