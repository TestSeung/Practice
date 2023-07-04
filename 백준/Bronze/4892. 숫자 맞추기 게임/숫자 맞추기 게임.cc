#include <iostream>

using namespace std;

int main()
{
	int Num1;
	int Count=1;
	while (true)
	{
		cin >> Num1;
		if (Num1 == 0)
		{
			break;
		}
		Num1 *= 3;
		if (Num1 % 2 == 0)
		{
			Num1 /= 2;
			cout <<Count<<". "<< "even ";

		}
		else if (Num1 % 2 != 0)
		{
			Num1 = (Num1 + 1) / 2;
			cout << Count << ". " << "odd ";
		}
		Num1 *= 3;
		Num1 /= 9;
		cout << Num1 <<'\n';
		
		Count++;
	}
	return 0;
}