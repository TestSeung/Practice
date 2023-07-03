#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int Num1, Num2;
    string num1= to_string(a);
    num1 += to_string(b);
    string num2 = to_string(b);
    num2 += to_string(a);
    Num1=stoi(num1);
    Num2= stoi(num2);

    answer = Num1 > Num2 ? Num1 : Num2;
    return answer;
}