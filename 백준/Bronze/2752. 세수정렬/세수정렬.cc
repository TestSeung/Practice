#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N[3];
	for(int i=0;i<3;i++)
	cin >> N[i];

	sort(N, N+3);
	
	for (int i = 0; i < 3; i++)
	cout << N[i]<<" ";

	return 0;
}