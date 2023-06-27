#include<iostream>
using namespace std;
int main(void)
{
	for (int i = 0; ; i++)
	{
		int A, B;
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		cout << A + B << "\n";
	}

	return 0;
}