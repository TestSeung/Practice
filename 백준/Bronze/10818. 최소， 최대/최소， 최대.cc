#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int Array[1000000];
	int Num1;
	for (int i = 0; i < N; i++)
	{
		cin >> Num1;
		Array[i] = Num1;
	}
	int Min = Array[0]; int Max = Array[0];
	for (int i = 0; i < N; i++)
	{
		if (Array[i] >= Max)
			Max = Array[i];
		else if (Array[i] <= Min)
			Min = Array[i];
	}
	cout << Min << ' ' << Max;
}