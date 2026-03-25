import java.util.*;
class Solution {
    boolean solution(String s) {
        boolean answer = true;
        Deque<Character> dq = new ArrayDeque<Character>();
        
        for(char c : s.toCharArray()){
            if(c == '('){
                dq.offerFirst(c);
            }
            
            else{
                if(dq.isEmpty()){
                    return false;
                }
                dq.pollLast();
            }
        }
        

        return dq.isEmpty();
    }
}