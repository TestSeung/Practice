#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int arr[26] = { 0, };
	string Massage;
	int max = 0;
	
	cin >> Massage;
	int Size = Massage.length();
	char Temp;

	
	

	for (int i = 0; i < Size; i++)
	{
		if (Massage[i] >= 'a')
		{
			arr[Massage[i] - 'a']++;
		}
		else
		{
			arr[Massage[i] - 'A']++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == max) 
		{
			Temp = '?';
		}
		else if (arr[i] > max)
		{
			max = arr[i];
			Temp = 'A' + i;
		}
	}
	cout << Temp;

	return 0;
}