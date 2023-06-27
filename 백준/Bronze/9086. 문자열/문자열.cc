#include<iostream>
#include<string>
using namespace std;

int main()
{
	int Input;
	cin >> Input;
	for (int i = 0; i < Input; i++)
	{
		string S;
		cin >> S;
		cout << S.front() << S.back() << '\n';
	}
	


	return 0;
}