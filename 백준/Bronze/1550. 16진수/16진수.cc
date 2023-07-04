#include <iostream>
#include <string>

using namespace std;

int main()
{
	string SixTeen;
	cin >> SixTeen;
	cout << stoi(SixTeen, nullptr, 16);
	return 0;
}