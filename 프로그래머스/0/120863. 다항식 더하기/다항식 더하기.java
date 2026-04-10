class Solution {
    public String solution(String polynomial) {
        String answer = "";
        
        int x = 0;
        int c = 0;
        for(String s : polynomial.split(" ")){
            if(s.contains("x")){
                if(s.length()==2){  
                    x += Integer.parseInt(s.charAt(0)+"");
                }else if(s.length()==3){
                    x += Integer.parseInt((s.charAt(0)+"")+(s.charAt(1)+""));
                }else{
                    x += 1;
                }  
            }
            else if(!s.equals("+")){
                c += Integer.parseInt(s);
            }
        }
        
        String ans = x==1 ? "x" : x+"x";
        String wer = c+"";
        
        if(x>0 && c>0){
            return ans+" + "+wer;
        } 
        if(x > 0 && c == 0){
            return ans;
        }
        if(x==0){
            return wer;
        }
        return "0";
    }
}