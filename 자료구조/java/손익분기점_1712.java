import java.util.Scanner;

public class 손익분기점_1712 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if (b >= c) {
            System.out.println(-1);
            return;
        }

        int breakEvenPoint = a / (c - b) + 1;
        System.out.println(breakEvenPoint);
    }
}
