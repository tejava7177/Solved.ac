import java.util.Scanner;

public class 프로그래머스_콜라츠 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        // 데이터 입력 받음
        int num = sc.nextInt();

        System.out.println(collatz(num));

    }

    //콜라츠 코드
    public static int collatz(int x) {

        int[] arr = new int[x + 1];
        int j = 0;
        int count = 0;

        for(int i = 1; i <= x; i++) {
            j = i;
            count = 0;
            while(j != 1) {
                if (j % 2 == 0) {
                    j /= 2;
                } else {
                    j = j * 3 + 1;
                }
                count++;

                if(count > 500){
                    return -1;
                }

                //조건
                if(j <= i){
                    count += arr[j];
                    break;
                }

            }
            arr[i] = count;
            //System.out.println("arr[" + i + "] =" + arr[i]);
        }
        return count;
    }
}
