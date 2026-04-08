class Solution {
    public int[] solution(String[] keyinput, int[] board) {
        int[] answer = {};
        int Ysize = board[1]/2;
        int Xsize = board[0]/2;
        
        int x = 0;
        int y = 0;
        
        for(String s : keyinput){
            if(s.equals("up")){
                if(Ysize==y){
                    continue;
                }
                y++;
            }
            else if(s.equals("down")){
                if(-Ysize==y){
                    continue;
                }
                y--;
            }
            else if(s.equals("left")){
                if(-Xsize==x){
                    continue;
                }
                x--;
            }
            else if(s.equals("right")){
                if(Xsize==x){
                    continue;
                }
                x++;
            }
            
        }
        return new int[]{x,y};
    }
}