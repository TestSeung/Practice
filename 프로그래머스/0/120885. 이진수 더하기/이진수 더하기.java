class Solution {
    public String solution(String bin1, String bin2) {
        String answer = "";
        int num1 = Integer.valueOf(bin1,2);
        int num2 = Integer.valueOf(bin2,2);
        
        int result = num1+num2;
        answer = Integer.toBinaryString(result);
        
        return answer;
    }
}