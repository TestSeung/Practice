class Solution {
    public int solution(int[] numbers, int k) {
        int answer = 0;
        int num = 0;
        
        
        while(k!=0){
            
            if(numbers.length-1<num){
               num -= numbers.length;
            }
            answer = numbers[num];
            
            num+=2;
            k--;
        }
        
        return answer;
    }
}