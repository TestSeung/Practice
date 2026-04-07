import java.util.*;
class Solution {
    public int solution(String s) {
        int answer = 0;
        
        Deque<Integer> arr = new ArrayDeque<>();
        
        String num = "";
        for(String str : s.split(" ")){

            if(str.equals("Z")){
                arr.removeLast();
            }
            else{
                int number = Integer.parseInt(str);
                arr.add(number);
                num = "";
            }
            
        }
        
        for(Integer i : arr){
            answer += i;
        }
        
        return answer;
    }
}