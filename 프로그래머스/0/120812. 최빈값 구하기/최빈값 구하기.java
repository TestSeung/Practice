import java.util.*;
class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int arr[][] = new int[1000][2];
        
        for(int i = 0;i<array.length;i++){
            arr[array[i]][0]++;
            arr[array[i]][1] = array[i];
        }
        
        
        
        Arrays.sort(arr,Comparator.comparingInt((int[] o) -> o[0]).reversed());
        
        if(arr[0][0]==arr[1][0]){
            return -1;
        }else{
            return arr[0][1];
        }
        

    }
}