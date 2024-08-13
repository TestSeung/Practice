import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr = new int[5];
        int total= 0;

        for(int i =0;i<5;i++){
            arr[i] = in.nextInt();
            total +=arr[i];
        }
        total /=5;

        System.out.println(total);

        int temp = 0;

        for(int i =0;i<4;i++){
            for(int j=i;j<5;j++){
                if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                }
            }
        }
        System.out.println(arr[2]);

     in.close();   
    }

}