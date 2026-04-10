import java.util.*;

class Solution {
    public int solution(String A, String B) {
        Deque<String> dq = new ArrayDeque<>();
        int answer = -1;
        int cnt = 0;
        
        if(A.equals(B)) return 0;
        
        for(String s : A.split("")){
            dq.add(s);
        }
        
        for(int i=0;i<A.length();i++){
            cnt++;
            
            dq.addFirst(dq.peekLast());
            dq.removeLast();
            
            String word = "";
            
            for(String s:dq){
                word += s;
            }

            if(word.equals(B)){
                break;
            }
        }
        
        
        answer = cnt == A.length() ? -1 : cnt;
        
        
        return answer;
    }
}