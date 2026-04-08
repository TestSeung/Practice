import java.util.*;
class Solution {
    public int[] solution(int n) {
       
        int i = 2;
        HashSet<Integer> set = new HashSet<>();
        
        while(true){
            
            if(n%i==0){
                n /=i;
                set.add(i);
                if(i > n) break;
            }
            else if(n%i!=0){
                i++;
            }
        }
        
        Iterator<Integer> iter = set.iterator();
        
         int[] answer = new int[set.size()];
         int num =0;
        while(iter.hasNext()){
            int next = iter.next();
            answer[num] = next;
            ++num;
        }
        
        Arrays.sort(answer);
        return answer;
    }
}