class Solution {
    public int solution(int n) {

        int threeX = 0;
        for(int i = 1; i <= n; i++){
            threeX++;
            while(true){
                if(threeX%3==0||threeX%10==3||threeX/10==3||threeX/100%10==3||threeX%100/10==3){
                    threeX++;
                } 
                else{
                     break;
                }
               
            }
            
            
        }
        
        return threeX;
    }
}