#include<iostream>
using namespace std;
int main(void)
{
    int N;
    int Result=0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        Result += i;
    }
    cout << Result << endl;
    return 0;
}