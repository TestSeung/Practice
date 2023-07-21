#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int lower_binary(int* arr, int target, int size)
{
	int mid, start, end;
	start = 0, end = size - 1;

	while (end > start)
	{
		mid = (start + end) / 2;
		if (arr[mid] >= target)
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}
	}
	return end;
}
int upper_binary(int* arr, int target, int size) {
	int mid, start, end;
	start = 0, end = size - 1;

	while (end > start) {
		mid = (start + end) / 2;
		if (arr[mid] > target)
			end = mid;
		else start = mid + 1;
	}
	return end;
}


int main()
{
	int n, m, temp, target, lower, upper;

	cin >> n;
	int* m_arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> m_arr[i];
	}
	sort(m_arr, m_arr + n);

	cin >> m;
	int* arr = new int[m];
	int* result = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		result[i] = 0;
	}

	for (int i = 0; i < m; i++)
	{
		lower = lower_binary(m_arr, arr[i], n);
		upper = upper_binary(m_arr, arr[i], n);
		if (upper == n - 1 && m_arr[n - 1] == arr[i])
		{
			upper++;
		}
		result[i] = upper - lower;		
	}
	for (int i = 0; i < m; i++)
	{
		cout << result[i] << ' ';
	}
	delete[] m_arr;
	delete[] arr;
	delete[] result;
	return 0;
}
