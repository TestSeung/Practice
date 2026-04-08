class Solution {
    public int solution(String my_string) {
        int answer = 0;
        
        int num = 0;
        int operand  = 1;
        for(String s : my_string.split(" ")){
            
            if(s.equals("+") || s.equals("-")){
               operand = s.equals("+") ? 1 : -1;
            }
            else{
                answer += Integer.parseInt(s) * operand;
            }
            
        }
        
        
        return answer;
    }
}