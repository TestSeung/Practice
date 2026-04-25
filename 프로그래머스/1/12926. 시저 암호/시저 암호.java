class Solution {
    public String solution(String s, int n) {
        String answer = "";
        for(char c: s.toCharArray()){
            if(c == ' '){
                answer += c;
                continue;
            }
            if((char)(c+n)>'z'){
                int temp = (char)(c+n)-'z';
                answer += (char)('a'+temp-1);
                continue;
            }
            if((char)(c+n)>'Z' && c <'a'){
                int temp = (char)(c+n)-'Z';
                answer += (char)('A'+temp-1);
                continue;
            }
            
            answer += (char)(c+n);
            
        }
        
        return answer;
    }
}