import java.util.Scanner;

public class 메모2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int count = 0;
        boolean[] arr = new boolean[n+1];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = true;
        }

        arr[0] = false;
        arr[1] = false;

        for (int i = 2; i * i < n+1; i++) {
            if (arr[i]) {
                for (int j = i * i; j < n+1; j += i) {
                    arr[j] = false;
                }
            }
        }

        for (int i = 0; i < n+1; i++) {
            System.out.println(i + ": " + arr[i]);
            if (arr[i] == true) {
                count++;
            }
        }
        System.out.println(count);
    }
}
