#include <iostream>
#include <vector>

using namespace std;

int Push(string vector)
{
    int num;
    if ("push" == vector)
    {
        cin >> num;
        return num;
    }
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    vector<int>v;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string vector;
        cin >> vector;
        if (vector == "pop")
        {
            if (!v.empty())
            {
                cout << v.front()<<"\n";
                v.erase(v.begin());
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if (vector == "size")
        {
            cout<<v.size() << "\n";
        }
        else if (vector == "empty")
        {
            cout<<v.empty() << "\n";
        }
        else if (vector == "front")
        {
            if (!v.empty())
            {
                cout << v.front() << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if (vector == "back")
        {
            if (!v.empty())
            {
                cout << v.back() << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else
        {
            v.push_back(Push(vector));
        }
    }
    return 0;
}
