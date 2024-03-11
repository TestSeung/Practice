#include <iostream>

using namespace std;

int main() {
	int  N;
	double max = 0;
	double result = 0;
	double M[1000] = { 0.f };
	cin >> N;
	for(int i =0;i<N;i++)
	{
		cin >> M[i];
		if (M[i] > max)
		{
			max = M[i];
		}
	}
	for (int i = 0; i < N; i++)
	{
		M[i] = M[i] / max * 100;
		result += M[i];
	}
	cout << fixed;
	cout.precision(2);

	result /= N;
	cout << result;

}
