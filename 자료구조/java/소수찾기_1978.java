import java.util.Scanner;

public class 소수찾기_1978 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] temp = new int[n];
        int count = 0;

        for (int i = 0; i < temp.length; i++) {
            temp[i] = sc.nextInt();
        }

        for (int i = 0; i < temp.length; i++) {
            count += findNum(temp[i]);
        }

        System.out.println(count);
    }

    public static int findNum(int n) {
        if (n < 2) {
            return 0;  // 0과 1은 소수가 아님
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return 0;  // 소수가 아님
            }
        }
        return 1;  // 소수임
    }
}
