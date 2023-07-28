#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int a, int b) {
    cin>>a>>b;
    string ball;
    int ballR;
    int duo;
    int answer = 0;
    duo = 2*a*b;
    string A = to_string(a);
    string B = to_string(b);
    ball = A+=B;
   
    ballR = stoi(ball);
    
    if(ballR>=duo)
    {
        answer = ballR;
    }
    else
    {
        answer = duo;
    }
    
    return answer;
}