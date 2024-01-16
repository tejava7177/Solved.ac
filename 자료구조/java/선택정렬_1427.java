import java.util.Scanner;

public class 선택정렬_1427 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        //문자열을 입력 받음
        String str = sc.next();

        // 문자열의 길이만큼 배열 생셩
        int[] A = new int[str.length()];

        for (int i =0; i<str.length(); i++){
            //문자열 데이터를 정수형으로 형변환 하여 삽입
            A[i] = Integer.parseInt(str.substring(i, i+1));
        }



        for(int i =0; i<str.length(); i++){
            int max = i;
            for(int j = i+1; j<str.length(); j++){
                if(A[j] > A[max]){
                    max = j;
                }
            }
            if(A[i] < A[max]){
                int temp = A[i];
                A[i] = A[max];
                A[max] = temp;
            }
        }



        // 배열의 길이만큼 문자열 출력
        for(int i =0; i<str.length(); i++){
            System.out.println(A[i]);
        }
    }
}
