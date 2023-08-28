#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    size_t found = my_string.rfind(is_suffix);
    if(found !=string::npos && found == my_string.size()-is_suffix.size())
    {
        answer =1;
    }
    else
        answer =0;       
    return answer;
}