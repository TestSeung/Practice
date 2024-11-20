#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
   

vector<int> arr2 = {2,1,2,3,2,4,2,5};
vector<int> arr3 = {3,3,1,1,2,2,4,4,5,5};
    
vector<int> arr11;
vector<int> arr22;
vector<int> arr33;

int count1 = 0;
int count2 = 0;
int count3 = 0;

int num = 0;


for (int i = 0; i < answers.size(); i++) {

    num++;
    arr11.push_back(num);

    if(num == 5)
    {
        num = 0;
    }
}


bool flag = false;
for (int i = 0; i < answers.size(); i++) {

    for (int j = 0; j < arr2.size(); j++) {
        arr22.push_back(arr2[j]);

        if (answers.size() == arr22.size()) {
            flag = true;
            break;
        }
    }
    if (flag)
        break;
}


flag = false;
for (int i = 0; i < answers.size(); i++) {

    for (int j = 0; j < arr3.size(); j++) {
        arr33.push_back(arr3[j]);

        if (answers.size() == arr33.size()) {
            flag = true;
            break;
        }
    }
    if (flag)
        break;
}


for (int i = 0; i < answers.size(); i++) {
    if (answers[i] == arr11[i])
        count1++;
    if (answers[i] == arr22[i])
        count2++;
    if (answers[i] == arr33[i])
        count3++;
}

vector<int> answer;

if (count1 == count2 && count2 == count3) {
    
    answer = { 1,2,3 };
}
else if (count1 == count2 && count1 > count3) {
    answer = { 1,2 };
}
else if (count2 == count3 && count2 > count1) {
    answer = { 2,3 };
}
else if (count1 == count3 && count1 > count2) {
    answer = { 1,3 };
}
else {
    int countAnswer;
    if (count1 > count2 && count1 > count3) {
        countAnswer = 1;
    }
    else if (count2 > count3) {
        countAnswer = 2;
    }
    else countAnswer = 3;
    answer.push_back(countAnswer);
}

    return answer;
}