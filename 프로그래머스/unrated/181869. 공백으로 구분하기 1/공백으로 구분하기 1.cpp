#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    int pos =0;
    int length =0;
    for(int i =0;i<= my_string.size();i++)
    {
        //0~0,2~5,7~9;
        if(my_string[i]<97||my_string[i]==NULL)
        {
            length=i-pos;
            
            answer.push_back(my_string.substr(pos,length));   
            pos = i+1;
        }
            
        
    }
    return answer;
}