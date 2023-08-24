#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    map<int,int> m;
    
    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;
   
    for(auto i : m)
    {
        if(i.second ==4)
            answer = 1111*i.first;
        
        else if(i.second ==3)
        {
            for(auto j:m)
            {
                if(j.second ==1)
                {
                    answer = max(answer,(10 * i.first+j.first)*(10 * i.first+j.first));
                }
            }
        }
        else if(i.second ==2)
        {
            int second_two =0;
            for(auto j:m){
                if(j.second == 2&&j.first != i.first)
            {
                second_two = j.first;
                answer = max(answer,(i.first + second_two)*abs(i.first - second_two));
            }
        }
        if(second_two == 0)
        {
            vector<int> others;
            for(auto j : m)
            {
                if(j.second == 1)
                {
                    others.push_back(j.first);
                }
            }
            answer = max(answer,others[0]*others[1]);
        }
    }
    }
    if(answer == 0)
    {
        answer = min({a,b,c,d});
    }

    return answer;
}