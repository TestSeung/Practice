import java.util.*;
class Solution {
    public int[] solution(int[] numlist, int n) {
        int[] answer = new int[numlist.length];
        
        int[][] length = new int[numlist.length][2];
        
        for(int i =0;i<numlist.length;i++){
            length[i][0] = Math.abs(n-numlist[i]);
            length[i][1] = numlist[i];
        }
        
        Arrays.sort(length,new Comparator<int[]>(){
            @Override
            public int compare(int[] o1, int[] o2){
                return o1[0]!=o2[0] ? o1[0]-o2[0]:o2[1]-o1[1];
            }
        });
                    
        for(int i =0;i<answer.length;i++){
            answer[i] = length[i][1];
        }
        
        
        return answer;
    }
}