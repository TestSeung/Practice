import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr= new int[n];
        int[] result = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
            result[i]=i+1;
        }
        for(int i=0;i<n;i++){
            int num = i;
            for(int j=0;j<arr[i];j++){
                int temp = result[num-1];
                result[num-1]=result[num];
                result[num]=temp;
                num--;
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(result[i]+" ");
        }
    }
}
