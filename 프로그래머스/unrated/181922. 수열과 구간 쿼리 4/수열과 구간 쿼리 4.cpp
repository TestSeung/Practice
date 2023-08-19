#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i =0;i<queries.size();i++)
    {
        for(int j =queries[i][0];j<=queries[i][1];j++)
        {
                if(arr[j]==0||j==0)
                    arr[j]++;
            
                else if(j%queries[i][2]==0)
                    arr[j]++;
        }   
    }
    answer = arr;
    return answer;
}