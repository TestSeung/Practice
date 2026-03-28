import java.util.HashSet;

class Solution {
    HashSet<Integer> numberSet = new HashSet<>();
    
    public int solution(String numbers) {
        int answer = 0;
        recursive("",numbers);
        int count =0;
        
        for(int i: numberSet){
            if(i==0 || i==1) continue;
            
            for(int j=1;j<i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count == 1){
                answer++;
            }
            count = 0;
        }
        return answer;
    }
    
    public void recursive(String cur, String others){
        if(!cur.equals("")){
            numberSet.add(Integer.valueOf(cur));
        }
        
        for(int i =0;i<others.length();i++){
            recursive(cur+others.charAt(i),others.substring(0,i)+others.substring(i+1));
        }
        
    }
}