import java.util.*;
class Solution {
    public int[] solution(int[] num_list) {
        int[] answer = {};
        Deque<Integer> arr = new ArrayDeque<>();
        
        for(int num : num_list){
            arr.push(num);
        }
               
        int[] intArr = arr.stream().mapToInt(Integer::intValue).toArray();
        
        return intArr;
    }
}