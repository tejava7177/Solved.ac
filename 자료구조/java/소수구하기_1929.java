import java.util.Scanner;

public class 소수구하기_1929 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int min = sc.nextInt();             //시작수
        int max =  sc.nextInt();            //종료수

        //담을 배열 생성
        int[] arr = new int[max+1];

        //이번에는 인덱스 값으로 초기화
        for(int i = 2; i < arr.length; i++){
            arr[i] = i;
        }

        //2부터 해당 수의 제곱근까지 배수를 0으로 => 에라토테네스의 체
        for(int i = 2; i <= Math.sqrt(max); i++){
            // 배수의 인덱스 값은 0으로
            for(int j = i + i; j <= max; j = j + i){
                arr[j] = 0;
            }
        }

        // 시작범위부터 끝까지 소수 출력
        for(int i = min; i <= max; i++){
            if(arr[i] != 0){
                System.out.println(arr[i]);
            }
        }

    }
}
