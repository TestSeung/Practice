#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<string> substrings;
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        string current = "";
        for (int j = i; j < n; ++j) {
            current += s[j];
            substrings.insert(current);
        }
    }

    cout << substrings.size();
}
