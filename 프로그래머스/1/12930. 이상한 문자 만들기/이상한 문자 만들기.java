class Solution {
    public String solution(String s) {
        String answer = "";
        char[] array = s.toCharArray();
        int first = 2;
        for(char c:array){
            if(c==' '){
                first = 2;
                answer += ' ';
                continue;
            }
            
            if(first%2==0){
                if(c<'a'){
                   answer += c;
                }
                else{
                answer += (char)(c-('a'-'A'));
                }
                first++;
            }
            else{
                if(c<'a'){
                   answer += (char)(c+('a'-'A'));
                }
                else{
                answer +=c;
                }
                first++;
            }
        }
        
        
        return answer;
    }
}