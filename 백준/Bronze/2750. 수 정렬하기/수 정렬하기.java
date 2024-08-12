import java.util.Scanner;


public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        int[] arr = new int[a];
        for(int i =0;i<a;i++)
        {
            arr[i] =  scan.nextInt();
        }
        
        for(int i =0;i<arr.length -1;i++){
            for(int j =i+1 ;j<arr.length;j++){
                if(arr[i]>arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        for(int v:arr) System.out.println(v);
    }
}