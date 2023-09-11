#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string s;
    
    for(char i : myString)
    {
        if(i != 'x')
        {
            s +=i;
        }
        else
        {
            if(!s.empty())
            {
                answer.push_back(s);
                s ="";
            }
        }
    }
    if(!s.empty())
        {
            answer.push_back(s);
        }
    
    sort(answer.begin(),answer.end());
    return answer;
}