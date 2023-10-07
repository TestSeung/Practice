#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    int num1 =0;
    int num2 =0;
    
    num1 = date1[0]*10000+date1[1]*100+date1[2];
    num2 = date2[0]*10000+date2[1]*100+date2[2];
    
    if(num1<num2)
    {
        answer = 1;
    }
    return answer;
}