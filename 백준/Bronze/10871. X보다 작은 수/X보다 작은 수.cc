#include<iostream>
using namespace std;
int main()
{
	int InputA, InputB;
	cin >> InputA >> InputB;
	int X[10000];
	int Y;

	for (int i = 0; i < InputA; i++)
	{
		cin >> Y;
		X[i] = Y;
	}
	for (int i = 0; i < InputA; i++)
	{
		if (X[i] < InputB)
			cout << X[i] << " ";
	}
}