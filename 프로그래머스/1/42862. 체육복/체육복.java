import java.util.HashSet;
class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        HashSet<Integer> lostSet = new HashSet<>();
        HashSet<Integer> resSet = new HashSet<>();
        
        for(int i: lost){
            lostSet.add(i);
        }
        for(int i: reserve){
            if(lostSet.contains(i)){
                lostSet.remove(i);
                continue;
            }
            resSet.add(i);
        }

        for(int i =1;i<=n;i++){
            if(lostSet.contains(i)){
                if(resSet.contains(i-1)){
                    lostSet.remove(i);
                    resSet.remove(i-1);
                }
                else if(resSet.contains(i+1)){
                    lostSet.remove(i);
                    resSet.remove(i+1);
                }
            }
        }
        answer = n- lostSet.size();
        return answer;
    }
}