import java.util.Scanner;

public class 개똥벌레_3020_2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();  // 장애물 개수
        int h = sc.nextInt();  // 동굴의 높이

        int[] up = new int[h + 1];   // 종유석
        int[] down = new int[h + 1]; // 석순

        // 장애물 정보 입력 받기
        for(int i = 0; i < n / 2; i++) {
            down[sc.nextInt()]++;  // 석순
            up[sc.nextInt()]++;    // 종유석
        }

        // 누적합 계산
        for(int i = h - 1; i > 0; i--) {
            down[i] += down[i + 1];
            up[i] += up[i + 1];
        }

        int min = n; // 최소 장애물 수, 최대로 초기화
        int cnt = 0; // 최소값이 되는 구간의 수

        // 모든 높이에 대해 검사
        for(int i = 1; i <= h; i++) {
            // 현재 높이에서의 장애물 수 = 석순 누적합 + 종유석 누적합
            int totalObstacles = down[i] + up[h - i + 1];

            if(totalObstacles < min) {
                min = totalObstacles;
                cnt = 1;
            } else if(totalObstacles == min) {
                cnt++;
            }
        }

        System.out.println(min + " " + cnt);
    }
}
