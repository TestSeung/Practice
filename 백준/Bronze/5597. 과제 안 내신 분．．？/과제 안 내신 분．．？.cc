#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int Input;
	vector<int>Student;

	for (int i = 1; i <= 30; i++)
	{
		Student.push_back(i);
	}
	for (int i = 0; i < 28; i++)
	{
		cin >> Input;
		for (int j = 0; j < Student.size(); j++)
		{
			if (Student[j] == Input)
			{
				Student.erase(Student.begin()+j);
			}
		}
	}
	for (int i = 0; i < Student.size(); i++)
	{
		cout << Student[i] << '\n';
	}
	return 0;
}