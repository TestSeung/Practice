#include <string>
#include <vector>

using namespace std;

int visited[200];

void dfs(int current_computer,int n,vector<vector<int>> computers){
    
    visited[current_computer] = 1;
    
    for(int i=0;i<n;i++){
        if(visited[i]==0 && computers[current_computer][i] ==1){
            dfs(i,n,computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i = 0;i<n;i++){
        if(visited[i]==0){
            dfs(i,n,computers);
            
            answer++;
        }
    }
    return answer;
}