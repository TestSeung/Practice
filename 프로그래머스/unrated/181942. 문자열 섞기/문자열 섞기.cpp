#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    vector<char>v;
    for (int i = 0; i <str1.length(); i++)
    {
        v.push_back(str1[i]);
        v.push_back(str2[i]);
    }
    string answer = "";
    for (int i = 0; i < v.size(); i++)
    {
        answer += v[i];
    }
    return answer;
}