class Solution {
    public int solution(int[] box, int n) {
        int answer = 0;
        int x = 0;
        int y = 0;
        int z = 0;
        
        x = maxSize(box,n,0);
        y = maxSize(box,n,1);
        z = maxSize(box,n,2);
        
        
        answer =(x*y*z)/(n*n*n);
        
        return answer;
    }
    
    public int maxSize(int[] box, int n ,int edgeNum){
        
        int edge = 0;
        for(int i =1;i<=box[edgeNum];i++){
            if(i%n==0){
                edge = i;
            }
        }
        
        return edge;
    }
}