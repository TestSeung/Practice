import java.util.Arrays;
class Solution {
    public int solution(int[] array) {
        int num = array.length/2;
        Arrays.sort(array);  
        
        return array[num];
    }
}