#include <iostream>
#include <vector>

using namespace std;

int main()
{
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
    for (int i = 0; i < v.size(); i++)
    {
        Result += v[i];
    }
    cout << Result;
    return 0;
}
