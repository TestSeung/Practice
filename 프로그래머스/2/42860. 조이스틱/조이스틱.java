import java.util.*;

class Solution {
    public int solution(String name) {
        int answer = 0;
        
        int turn =name.length();
        
        int move = turn -1;
        
        for(int i =0;i<turn;i++){
            char c = name.charAt(i);
            
            answer +=Math.min(c-'A','Z'-c+1);
            
            int nextIndex = i+1;
            while(nextIndex<turn && name.charAt(nextIndex) == 'A'){nextIndex++;}
            
            move = Math.min(move,(i*2)+(turn - nextIndex));
            move = Math.min(move,(turn - nextIndex)*2 +i);
             
            //65 90 25 13
            
        }

        
        
        return answer +move;
    }
}