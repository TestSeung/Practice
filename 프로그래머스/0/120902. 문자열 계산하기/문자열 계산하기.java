class Solution {
    public int solution(String my_string) {
        int answer = 0;
        
        int num = 0;
        String operand  = "";
        for(String s : my_string.split(" ")){
            
            
            if(s.equals("+") || s.equals("-")){
                operand = s;
                continue;
            }
            if(operand.equals("")){
                answer += Integer.parseInt(s);
                 continue;
            }
            if(operand.equals("+")){
                answer += Integer.parseInt(s);
            }
            else{
                 answer -= Integer.parseInt(s);
            }
        }
        
        
        return answer;
    }
}