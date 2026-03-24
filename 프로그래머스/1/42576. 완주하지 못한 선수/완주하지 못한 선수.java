import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        HashMap<String,Integer> map = new HashMap<String,Integer>();
        int temp;
        for(int i=0;i<participant.length;i++){
            if(!map.containsKey(participant[i])){
                map.put(participant[i],1);
            }
            else{
                temp = map.get(participant[i]);
                map.put(participant[i],++temp);
            }
            
        }
        for(int i=0;i<completion.length;i++){
            if(map.containsKey(completion[i])){
                temp = map.get(completion[i]);
                map.put(completion[i],--temp);
            }
         }
        
        for(Map.Entry<String,Integer> elem : map.entrySet()){
            if(elem.getValue() == 1)
                answer = elem.getKey();
        }
        return answer;
    }
}