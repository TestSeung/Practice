import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int sum = 0;
        List<Integer> arr = new ArrayList<Integer>();
        for (int i = 0; i < 9; i++) {
            int number = input.nextInt();
            arr.add(number);
            sum += number;
        }
        int div = sum - 100;
        int temp = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 1; j < 9; j++) {
                if ((arr.get(i) + arr.get(j)) == div) {
                    arr.set(i,101);
                    arr.set(j,101);
                    temp +=1;
                    break;
                }
            }
            if(temp>0){
                break;
            }
        }
        Collections.sort(arr);
        for (int i = 0; i < 9; i++) {
            if(arr.get(i) != 101){
                System.out.println(arr.get(i));
            }
        }
    }
}
