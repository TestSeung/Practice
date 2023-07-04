#include <iostream>

using namespace std;

int main()
{
	int Num1, Num2;
	bool Loop = true;
	while (Loop)
	{
		cin >> Num1>>Num2;
		if(Num1==0&&Num2==0)
		{
			Loop = false;
		}
		else if (Num1 > Num2)
		{
			cout << "Yes" << '\n';
		}
		else
		{
			cout << "No" << '\n';
		}
		
	}
	return 0;
}