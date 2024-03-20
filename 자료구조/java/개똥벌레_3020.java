import java.util.Arrays;
import java.util.Scanner;

public class 개똥벌레_3020 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();      //장애물
        int h = sc.nextInt();      //높이
        int min; //최소값
        int cnt = 0; //최소경로 갯수

        int[] obstacle = new int[n];
        int[] cave = new int[h];
        Arrays.fill(cave, 0);       //배열 모든 index를 0으로 초기화

        for(int i=0; i < n; i++){
            obstacle[i] = sc.nextInt();
            if(i % 2 == 0){
                for(int j = 0; j < obstacle[i]; j++){
                    cave[j]++;
                }
            }
            else{
                for(int j = h-1; j >= h - obstacle[i]; j--){
                    cave[j]++;
                }
            }
        }

//        for(int i = 0; i<h; i++){
//            System.out.println(cave[i]);
//        }

        min = cave[0];
        for(int i = 1; i < cave.length; i++){
            if(cave[i] < min){
                min = cave[i];
            }
        }

        for(int i = 0; i<cave.length; i++){
            if(min == cave[i]){
                cnt++;
            }
        }

        System.out.println(min + " " + cnt);

    }
}
