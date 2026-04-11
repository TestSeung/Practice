class Solution {
    public int[] solution(int num, int total) {
        int[] answer = new int[num];
        int middleNum = total/num;
        int value = num/2;
        if(num%2!=0){
            for(int i = 0;i<num;i++){
                answer[i] = middleNum+i-value;
            }
        }else{
            middleNum+=1;
            for(int i = 0;i<num;i++){
                answer[i] = middleNum+i-value;
            }
        }
        
        
        
        return answer;
    }
}