#include <iostream>
#include <queue>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    string s;
    int m;
    queue<int>q;
    while (N--)
    {
        
        cin >> s;
        if (s == "push")
        {
            cin >> m;
            q.push(m);
        }
        else if (s == "pop")
        {
            if (q.empty())
            {
                cout << -1<<'\n';
            }
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (s == "size")
        {
            cout << q.size() << '\n';
        }
        else if (s == "empty")
        {
            cout << q.empty() << '\n';
        }
        else if (s == "front")
        {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
            }
        }
        else
        {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.back() << '\n';
            }
        }
    }
    return 0;
}
