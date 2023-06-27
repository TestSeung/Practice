#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int input;
    int x[100];
    int v;
    int Result = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin >> v;
        x[i] = v;
      
    }
    cin >> input;
    for (int i = 0; i < N; i++)
    {
        if (input == x[i])
        {
            Result++;
        }
    }
    cout << Result;
}