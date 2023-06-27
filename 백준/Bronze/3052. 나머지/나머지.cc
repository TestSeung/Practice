#include<iostream>


using namespace std;


int main()
{
	int Array[42] = { 0 };
	int Input;
	int Count = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> Input;
		Array[Input % 42]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if(Array[i]>0)
		{
			Count++;
		}
	}
	cout << Count;

	return 0;
}