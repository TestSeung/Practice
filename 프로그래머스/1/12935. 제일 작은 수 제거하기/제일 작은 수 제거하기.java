import java.util.*;

class Solution {
    public int[] solution(int[] arr) {
        if(arr.length == 1){
            return new int[]{-1};
        }
        int[] answer = new int[arr.length-1];
        
        int[] copy = arr.clone();
        
        Arrays.sort(copy);
        
        int min = copy[0];
        
        int num = 0;
        for(int i =0;i<arr.length;i++){
            
            if(arr[i]==min){
                continue;
            }
            answer[num] = arr[i];
            num++;
        }
        
        
        return answer;
    }
}