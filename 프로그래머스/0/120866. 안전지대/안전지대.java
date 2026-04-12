import java.util.*;
class Solution {
    public int solution(int[][] board) {
        int answer= 0;
        int height = board.length;
        int width = board[0].length;
        
        
        for(int i = 0;i < height;i++){
            for(int j=0;j < width;j++){
                if(board[i][j] ==1){
                    check(board,height,width,i,j);
                }
            }
        }
        
         for(int i = 0;i < height;i++){
            for(int j=0;j < width;j++){
                if(board[i][j] ==0){
                    answer++;
                }
            }
        }
        
        return answer;
    }
    
    public void check(int[][] board,int height, int width ,int x,int y){
        
        for(int i =0;i<2;i++){
            for(int j=0;j<2;j++){
                
                if(x-i >= 0 && y-j >= 0){
                    if(board[x-i][y-j] != 1 )
                    board[x-i][y-j] = 2; 
                }
                
                
                if(x+i < height && y+j < width){
                    if(board[x+i][y+j] != 1)
                    board[x+i][y+j] = 2; 
                }
                
                
                if(x-j >= 0 && y-i >= 0){
                    if(board[x-j][y-i] != 1)
                    board[x-j][y-i] = 2;
                }
                    
                if(x+j < height && y+i < width){
                    if(board[x+j][y+i]  != 1)
                    board[x+j][y+i] = 2;  
                }
                
            }
            if(x-i >= 0 && y+i < width){
                if(board[x-i][y+i] != 1)
                board[x-i][y+i] = 2;  
            }
            
            
            if(x+i < height && y-i >= 0){
                if(board[x+i][y-i] != 1)
                board[x+i][y-i] = 2;  
            }
           
        }
        
    }
}