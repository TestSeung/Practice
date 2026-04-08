class Solution {
    public long solution(String numbers) {

        String[] alphabet = {"zero","one","two","three","four","five","six","seven","eight","nine"};
        
       for(int i=0;i<alphabet.length;i++){
           numbers = numbers.replace(alphabet[i],i+"");
       }
       
        return Long.parseLong(numbers);
    }
}