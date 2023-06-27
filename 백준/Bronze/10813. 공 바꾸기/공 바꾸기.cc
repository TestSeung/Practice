#include<iostream>
#include<vector>

using namespace std;


int main()
{
	int NumN, NumM;
	vector<int>ArrayA;
	cin >> NumN>>NumM;
	int Numi, Numj;
	int temp;

	for(int i =0;i<=NumN;i++)
	{
		ArrayA.push_back(i);
	}
	for (int j = 0; j < NumM; j++)
	{
		cin >> Numi >> Numj;
		if (Numi <= Numj)
		{
			temp = ArrayA[Numi];
			ArrayA[Numi] = ArrayA[Numj];
			ArrayA[Numj] = temp;
		}
	}
	for(int k =1;k <=NumN;k++)
	{
		cout << ArrayA[k]<<' ';
	}
		return 0;
}