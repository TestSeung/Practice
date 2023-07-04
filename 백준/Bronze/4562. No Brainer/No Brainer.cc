#include <iostream>

using namespace std;

int main()
{
	int Num1, Num2, N;
	cin >> N;
	while (N)
	{
		cin >> Num1>>Num2;
		
		if (Num1 < Num2)
		{
			cout << "NO BRAINS" << '\n';
		}
		else
		{
			cout << "MMM BRAINS" << '\n';
		}
		N--;
	}
	return 0;
}