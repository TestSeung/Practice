import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
         StringBuilder sb = new StringBuilder();
        ArrayList<Integer> list = new ArrayList<>();
        for(int i =0;i<n;i++){
            list.add(in.nextInt());
        }
        Collections.sort(list);

        for(int value : list) {
			sb.append(value).append('\n');
		}
                System.out.println(sb);
     in.close();   
    }

}