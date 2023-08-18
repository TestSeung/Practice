#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i= 0; i < queries.size();i++)
    {
        int val =1000001;
        for(int j= queries[i][0];j<=queries[i][1];j++)
        {
            if(arr[j]>queries[i][2])
               
               val = min(val, arr[j]);
        }
        if (val == 1000001)
        {
            val = -1;
        }
        answer.push_back(val);
    }
    return answer;
}