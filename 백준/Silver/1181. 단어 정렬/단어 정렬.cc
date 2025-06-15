#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int num;

    cin >> num;

    string s;
    vector<pair<int,string>> v;
    map<string,int> m;
    while (num--) {
        cin >> s;
        m[s]++;
    }

    int size = m.size();
    for (auto a : m) {
        v.push_back({ a.first.size(), a.first});
    }


    sort(v.begin(), v.end());

    for (int i = 0;i < v.size();i++){
        cout<< v[i].second<<'\n';
    }

}

