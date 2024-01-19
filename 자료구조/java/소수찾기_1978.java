import java.util.Scanner;

public class 소수찾기_1978 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 몇 개의 숫자를 입력 받을 것인가?
        int n = sc.nextInt();

        // 입력 받은 데이터를 담을 배열 생성
        int[] temp = new int[n];
        // 결과 값을 나타낼 변수 생성
        int count = 0;

        //배열 초기화 -> 사용자로부터 입력받음
        for (int i = 0; i < temp.length; i++) {
            temp[i] = sc.nextInt();
        }

        //checkNum 함수의 반환값(정수 값)을 count 변수에 증가 소수라면 +1, 아니라면 +0
        for (int i = 0; i < temp.length; i++) {
            count += checkNum(temp[i]);
        }

        //결과 값 출력
        System.out.println(count);
    }

    //소수가 맞는지 확인하는 메서드
    //반환 값을 정수로 함으로써 count 값 증가
    public static int checkNum(int n) {
        if (n < 2) {
            return 0;  // 0과 1은 소수가 아님
        }

        // 2부터 시작하여 제곱한 수가 매개변수의 수 보다 작거나 같은동안 반복
        for (int i = 2; i * i <= n; i++) {
            //나누어 떨어지면 약수이기 때문에 소수가 아님.
            if (n % i == 0) {
                // 소수가 아닌 순간 더이상 반복할 필요가 없기 때문에 메서드 종료
                return 0;
            }
        }
        //해당 반복문을 실행했는데도 종료되지 않으면 소수임.
        return 1;
    }
}
