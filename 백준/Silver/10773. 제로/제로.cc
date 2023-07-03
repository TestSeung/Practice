#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    vector<int>v;
    int Count, Call;
    cin >> Count;
    int Result = 0;
    for (int i = 0; i < Count; i++)
    {
        cin >> Call;
        if (Call != 0)
        {
            v.push_back(Call);
        }
        else
        {
            v.pop_back();
        }
    }
    while(!v.empty())
    {
        Result += v.back();
        v.pop_back();
    }
    cout << Result;
    return 0;
}
