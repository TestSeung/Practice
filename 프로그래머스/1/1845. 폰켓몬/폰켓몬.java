import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        int cnt = nums.length/2;
        
        Map<Integer,Integer> m = new HashMap<Integer,Integer>();
        
        for(int i=0;i<nums.length;i++){
            m.put(nums[i],0);
        }
        int count =0;
        for(int num : m.keySet()){
            count++;
        }
        answer = cnt<count ? cnt : count;
         
        
        return answer;
    }
}