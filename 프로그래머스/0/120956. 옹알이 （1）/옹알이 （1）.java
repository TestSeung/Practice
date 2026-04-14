class Solution {
    public int solution(String[] babbling) {
        int answer = 0;
        String[] guga = { "aya", "ye", "woo", "ma"};
        
        for(String s: babbling){
            
            for(String gu : guga){
                System.out.println(s);
                s=s.replace(gu,"1");
                
            }
            
            
            s=s.replace("1","");
            if(s.equals("")){
                answer++;
            }
        }
        
        return answer;
    }
}