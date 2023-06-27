#include<iostream>
using namespace std;
int main()
{
	int Input;
	int array[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> Input;
		array[i] = Input;
	}
	int Max = array[0];

	for (int i = 0; i < 9; i++)
	{
		if (Max <= array[i])
		{
			Max = array[i];
		}
		
	}
	cout << Max << "\n";
	for (int i = 0; i < 9; i++)
	{
		if (Max == array[i])
		{
			cout << i+1;
		}
	}

	return 0;
}