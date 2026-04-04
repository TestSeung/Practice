class Solution {
    public int solution(int n) {
        double i = Math.sqrt(n);
        int answer =(i *10 )%10 ==0? 1 : 2;
        
        return answer;
    }
}