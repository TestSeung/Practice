class Solution {
    public int solution(int n) {
        int answer = 0;
        
        for(int i=6 ;i<1000;i+=6){
            answer++;
            if(i%n==0){
                break;
            } 
        }
        
        return answer;
    }
}