import java.util.Scanner;

public class 버블정렬_2750 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        //사용자로부터 정수형 데이터를 입력 받음.
        int N = sc.nextInt();
        //N의 갯수만큼 배열을 생성
        int A[] = new int[N];

        for(int i = 0; i < N; i++){
            A[i] = sc.nextInt();
        }

        //버블정렬
        for(int i = 0; i < N-1; i++){
            for(int j =0; j<N-1-i; j++){
                if(A[j] > A[j+1]){
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
            }
        }


        //결과 배열 출력
        for(int i = 0; i < N; i++){
            System.out.println(A[i]);
        }

    }
}
