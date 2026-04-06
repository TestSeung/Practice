class Solution {
    public int solution(String my_string) {
        int answer = 0;
        String temp = ""; 
        
        for(int i=0;i< my_string.length();i++){
            char c = my_string.charAt(i);
            
            if(c >='0'&&c<='9'){
                temp +=c-'0';

                if(i==my_string.length()-1){
                    answer += Integer.parseInt(temp);
                }
            }
            else if(temp != ""){

                answer += Integer.parseInt(temp);
                
                temp = "";
            }
        }
        
        return answer;
    }
}