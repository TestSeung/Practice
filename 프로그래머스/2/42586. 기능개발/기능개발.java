import java.util.*;

class Solution {
    public List<Integer> solution(int[] progresses, int[] speeds) {
        int[] answer = {};
        List<Integer> arr = new ArrayList<>();
      
        double pre = Math.ceil((100-(float)progresses[0])/(float)speeds[0]);
        
        arr.add(1);
        int temp = 0;
        for(int i=1;i<progresses.length;i++){
            
            if(pre >= Math.ceil((100-(float)progresses[i])/(float)speeds[i])){
               
              int var =  arr.get(temp);  
                arr.set(temp,++var);
            }
            else{
                pre = Math.ceil((100-(float)progresses[i])/(float)speeds[i]);
                ++temp;
                arr.add(1);
            }
        }
        
        
        return arr;
    }
}