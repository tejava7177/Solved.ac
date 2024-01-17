import java.util.Scanner;

public class 메모 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // 입력 값 받기
        int n = sc.nextInt();
        int count = 0;

        for(int i = 1; i <= n; i++){
            count += findNum(i);
        }

        System.out.println(count-1);

    }

    private static int findNum(int n){
        for(int i = 2; i < n; i++){
            if(n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

