#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int size = pat.length();
    int idx = myString.rfind(pat);
    for(int i =0;i<idx+size;i++)
    {
        answer += myString[i];
    }
    return answer;
}