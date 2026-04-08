class Solution {
    public int solution(int[] sides) {
        int answer = 0;        
        // x > long-short +1&& x <= long
        // x < sum && x > long
        int longSide = Math.max(sides[0],sides[1]);
        int shortSide = Math.min(sides[0],sides[1]);
        
        for(int i = (longSide-shortSide)+1 ; i < longSide+1;i++){
            answer += 1;
        }
        for(int i = longSide + 1;i < longSide + shortSide;i++){
            answer += 1;
        }
        
        return answer;
    }
}