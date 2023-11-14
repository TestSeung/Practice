#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string,int> ma;
    vector<string> vt;

    int N,M;
    cin>>N>>M;
    
    for(int i=0;i<N+M;i++)
    {
        string a;
        cin >> a;
        ma[a]++;
        if(ma[a]>1)
        vt.push_back(a);
    }

    sort(vt.begin(),vt.end());
    cout<<vt.size()<<'\n';
    for(auto o:vt)
    {
        cout<<o<<endl;
    }
    return 0;
}