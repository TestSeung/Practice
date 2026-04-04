import java.util.*;
class Solution {
    public int solution(int[] numbers) {
        Arrays.sort(numbers);
        
        int max = numbers[0]*numbers[1];
        
        max = Math.max(max,numbers[0]*numbers[1]);
        
        max = Math.max(max,numbers[numbers.length-1]*numbers[numbers.length-2]);
        
        return max;
    }
}