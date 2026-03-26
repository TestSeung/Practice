class Solution {
    public int[] solution(int n) {
        int[] answer = new int[(n+1)/2];
        int temp = 0;
        for(int i=1;i<=n;i++){
            
           if(i % 2 != 0){
               answer[temp] = i;
               temp++;
           }  
        }
        
        
        return answer;
    }
}