import java.util.Scanner;

public class 동적계획법1_1463 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // 입력 값 받기
        int N = sc.nextInt();

        // N 크기만큼 배열 생성
        int[] D = new int[N+1];

        // 초기값 세팅 1은 제외하기 때문에
        D[1] = 0;
        //반복은 2부터 시작
        for(int i = 2; i<=N; i++){
            // 1을 빼는 연산
            D[i] = D[i-1] + 1;  //D[7]의 값은 D[6] 값보다 연산이 1개 더 많기 때문

            // 2로 나누어떨어지는 경우
            if(i % 2 == 0){
                D[i] = Math.min(D[i], D[i/2]+1); // 1을 빼는 연산 중에 작은 값은 값을 저장
            }
            // 3으로 나누어떨어지는 경우
            if(i % 3 == 0){
                D[i] = Math.min(D[i], D[i/3]+1);
            }
        }

        System.out.println(D[N]);
    }
}
