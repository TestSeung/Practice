class Solution {
    public long solution(String numbers) {

        String[] alphabet = {"one","two","three","four","five","six","seven","eight","nine","zero"};
        
        String union = "";
        String result = "";
        for(String s : numbers.split("")){
            union += s;
            for(String alpha : alphabet){
                if(union.equals(alpha)){
                    if(alpha.equals("one")){
                        result += "1";
                    }else if(alpha.equals("two")){
                        result += "2";
                    }else if(alpha.equals("three")){
                        result += "3";
                    }else if(alpha.equals("four")){
                        result += "4";
                    }else if(alpha.equals("five")){
                        result += "5";
                    }else if(alpha.equals("six")){
                        result += "6";
                    }else if(alpha.equals("seven")){
                        result += "7";
                    }else if(alpha.equals("eight")){
                        result += "8";
                    }else if(alpha.equals("nine")){
                        result += "9";
                    }else if(alpha.equals("zero")){
                        result += "0";
                    }
                    
                    union = "";
                }
            }
            
        }
       
        return Long.parseLong(result);
    }
}