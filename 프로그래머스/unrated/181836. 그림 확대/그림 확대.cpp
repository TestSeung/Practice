#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string answerElement;
    for(int i =0;i<picture.size();i++){
        answerElement ={};
       for(char c:picture[i]){
           int num1 =k;
           while(num1--){
           answerElement+=c;
           }
       }
         int num2 =k;
       while(num2--)
       answer.push_back(answerElement);
    }
    return answer;
}