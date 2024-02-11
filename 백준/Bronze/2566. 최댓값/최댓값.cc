#include <iostream>


using namespace std;

int main() {
	int num;
	int temp=-1;
	int x, y;
	int arr[9][9] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{	
			cin >> num;
			arr[i][j] = num;
			if (temp < num) {
				x = i;
				y = j;
				temp = num;
			}
		}
	}
	cout << temp << '\n';
	cout << x+1 << ' ' << y+1;
	return 0;
}
