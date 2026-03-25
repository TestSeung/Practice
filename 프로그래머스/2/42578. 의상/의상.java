import java.util.HashMap;

class Solution {
    public int solution(String[][] clothes) {
        int answer = 1;
        HashMap<String,Integer> map = new HashMap<String,Integer>();
       
        for(int i =0;i<clothes.length;i++){           
                map.compute(clothes[i][1],(K,V) -> (V == null ? 2 : V + 1 ));
        }
        
        for(int i:map.values()){
            answer *= i;
        }
        
        
        return answer-1;
    }
}