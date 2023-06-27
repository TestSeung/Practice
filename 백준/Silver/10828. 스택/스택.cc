#include<iostream>
#include<stack>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	int Count; // 총 입력 횟수
	cin >> Count;
	stack<int> Result; // 스택에 저장할 것
	string input;	//문자열을 받기위한 변수
	int Num;	//push 뒤에 정수를 받기위한 변수
	while (Count--)
	{
		cin >> input;
		if (input == "push")
		{
			cin >> Num;
			Result.push(Num);
		}
		else if(input == "pop")
		{
			if (!Result.empty())
			{
				cout << Result.top() << '\n';
				Result.pop();
			}
			else
			{
				cout << -1 << '\n';
			}

		}
		else if (input == "size")
		{
			cout << Result.size()<< '\n';
		}
		else if (input == "empty")
		{
			cout << Result.empty()<< '\n';
		}
		else if (input == "top")
		{
			if (!Result.empty())
			{
				cout << Result.top() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
	}
	return 0;
}