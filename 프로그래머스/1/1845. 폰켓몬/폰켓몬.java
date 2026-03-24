import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        int cnt = nums.length/2;
        
        Map<Integer,Integer> m = new HashMap<Integer,Integer>();
        
        for(int i=0;i<nums.length;i++){
            m.put(nums[i],0);
        }
        
        answer = cnt<m.size() ? cnt : m.size();
         
        
        return answer;
    }
}