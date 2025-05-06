#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    vector<int> countX(10, 0), countY(10, 0);

    // 각 숫자의 등장 횟수 세기
    for(char c : X) countX[c - '0']++;
    for(char c : Y) countY[c - '0']++;

    string answer = "";

    // 9부터 0까지, 공통으로 등장한 숫자를 가능한 최대 횟수만큼 사용
    for(int i = 9; i >= 0; --i) {
        int common = min(countX[i], countY[i]);
        answer += string(common, i + '0');
    }

    if (answer.empty()) return "-1";
    if (answer[0] == '0') return "0"; // "0000" 같은 경우는 0

    return answer;
}