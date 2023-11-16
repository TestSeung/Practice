#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int answer1;
    int answer2;
    int under;
    int minn;
    
    under = denom1*denom2;
    answer1 = denom1*numer2;
    answer2 = numer1*denom2;
    answer1 =answer1+answer2;
    minn= __gcd(under,answer1);
    answer.push_back(answer1/minn);
    answer.push_back(under/minn);
    
    return answer;
}