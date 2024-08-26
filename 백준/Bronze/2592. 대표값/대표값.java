import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int result = 0;
        int answer= 0;

        int[] arr = new int[1000];
        for(int i =0;i<10;i++) {
            int n = input.nextInt();
            arr[n]++;
            result += n;
        }
        System.out.println(result/10);
        int temp =0;
        for(int i =0;i<arr.length;i++) {
            if(arr[i]>temp){
                temp=arr[i];
                answer = i;
            }

        }
        System.out.println(answer);
        input.close();
    }
}
