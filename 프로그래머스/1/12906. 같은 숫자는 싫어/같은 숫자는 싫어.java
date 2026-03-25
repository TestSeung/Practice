import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        
        
        List<Integer> newArr = new ArrayList<>();
  
        int firstNum = arr[0];
        
        newArr.add(firstNum);
        for(int i =1;i<arr.length;i++){
            if(firstNum==arr[i]){
                continue;
            }
            else{
                firstNum = arr[i];
                newArr.add(arr[i]);
            }
        }
        System.out.print(newArr.get(0).intValue());
        int[] answer = new int[newArr.size()];
        for(int i =0;i<answer.length;i++){
            answer[i] = newArr.get(i).intValue(); 
        }
        return answer;
    }
}