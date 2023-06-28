#include<iostream>
using namespace std;

void Gimozzy(int i,int N)
{
	for (int j = N; i < j - 1; j--)
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

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N-1; i++)
	{
		Gimozzy(i, N);
	}
	for (int i = N-1; 0 <= i; i--)
	{
		Gimozzy(i, N);
	}
	return 0;
}