import java.util.*;

class Solution {
    public List<Integer> solution(int[] array, int[][] commands) {
        List<Integer> answer = new ArrayList<Integer>();
        List<Integer> list = new ArrayList<Integer>();
        
        for(int i: array){
            list.add(i);
        }
        
        for(int i=0;i<commands.length;i++){
            answer.add(Func(list,commands,i));
        }
        
        return answer;
    }
    
public static Integer Func(List<Integer> list,int[][] commands,int i){
        int command1 = commands[i][0] - 1;
        int command2 = commands[i][1];

        int iter = commands[i][2] - 1;
        List<Integer> subList = new ArrayList<>(list.subList(command1,command2));
        Collections.sort(subList);
                
        if(command1 == command2-1){
            return list.get(command1);
        }
        
        Integer ans = subList.get(iter);
        return ans;
    }
}
