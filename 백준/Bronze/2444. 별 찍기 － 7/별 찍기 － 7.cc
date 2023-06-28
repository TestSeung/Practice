#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N-1; i++)
	{
		for (int j = N; i < j-1; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = N-1; 0 <= i; i--)
	{
		for (int j = N; i < j-1; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}