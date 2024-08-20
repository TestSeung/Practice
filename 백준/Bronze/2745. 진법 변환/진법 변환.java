import  java.util.Scanner;

public class Main{

public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String N = input.next();
        int B = input.nextInt();

        int result =0;

        for(int i=0;i<N.length();i++){
            char ch = N.charAt(N.length()-1-i);

            if('0'<=ch && ch<='9'){
                result += (ch-'0') * Math.pow(B,i);
            }
            else
            {
                result +=(ch-'A'+10) * Math.pow(B,i);
            }
        }
        System.out.println(result);


    }
}