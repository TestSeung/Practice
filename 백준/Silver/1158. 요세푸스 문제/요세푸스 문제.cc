#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int>N;
	int Num, Kconst, temp;
	cin >> Num >> Kconst;

	for (int i = 1; i <= Num; i++)
	{
		N.push(i);
	}
	cout << '<';
	while(N.size()>1)
	{
		for (int i = 0; i < Kconst - 1; i++)
		{
			temp = N.front();
			N.push(temp);
			N.pop();
		}
		temp = N.front();
		cout << temp << ", ";
		N.pop();
	}
	temp = N.front();
	cout << temp << ">\n";


	return 0;
}
