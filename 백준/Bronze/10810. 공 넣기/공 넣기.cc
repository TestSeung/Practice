#include<iostream>
using namespace std;


int main()
{
	int NumN, NumM;
	cin >> NumN >> NumM;
	int i, j, k;
	int Arrayi[100] = { 0, };
	while (NumM--)
	{
		cin >> i >> j >> k;
		for (; i <= j; i++)
		{
			Arrayi[i] = k;
		}
	}
	for (int i = 1; i <= NumN; i++)
	{
		cout << Arrayi[i] << '\n';
	}
		return 0;
}