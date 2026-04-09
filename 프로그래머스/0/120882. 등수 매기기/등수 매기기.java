class Solution {
    public int[] solution(int[][] score) {
        int[] answer = new int[score.length];
        int[][] info = new int[score.length][2];
        
        for(int i = 0;i<score.length;i++){
            info[i][0] = 1;
            info[i][1] = score[i][0]+score[i][1];
        }
        
        for(int i=0;i<info.length;i++){
            for(int j=0;j<info.length;j++){
                if(info[i][1] < info[j][1]){
                    info[i][0]++;
                }
            }
        }
        
        for(int i =0;i<answer.length;i++){
            answer[i] = info[i][0];
        }
        
        return answer;
    }
}