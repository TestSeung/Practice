class Solution {
    public int solution(int[][] lines) {
        int[] way = new int[200];
        
        int answer = 0;
        
        for(int[] line : lines){
            line[0]+=100;
            line[1]+=100;            
            for(int i = line[0];i<line[1];i++){
                way[i]++;
            }
        }
        for(int i : way){
            if(i>1){
                answer++;
            }
        }
        
        return answer;
    }
}