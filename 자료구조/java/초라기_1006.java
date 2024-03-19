
import java.util.Scanner;

public class 초라기_1006 {
    private static int[] enemy1; //첫번째 구역 라인 ;
    private static int[] enemy2; //두번째 구역 라인 ;
    private static int zoneCnt; //라인당 구역 수;
    private static int rangerCnt; //소대원 수;
    private static int result;

    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int i = 0; i < T; i++) {
            zoneCnt = sc.nextInt();
            rangerCnt = sc.nextInt();
            enemy1 = new int[zoneCnt];
            enemy2 = new int[zoneCnt];
            result = 0;

            for (int j = 0; j < zoneCnt; j++) {
                enemy1[j] = sc.nextInt();
            }
            for (int j = 0; j < zoneCnt; j++) {
                enemy2[j] = sc.nextInt();
            }

            calculate();

            //결과

        }
    }

    // 정복한 구역은 0 할당.
    private static void calculate() {
        boolean flag = false;

        for (int i = 0; i < zoneCnt; i++) {
            if (enemy1[i] == 0) {
                continue;
            }

            boolean before = checkBefore(enemy1, i);
            boolean after = checkAfter(enemy1, i);

        }

        for (int i = 0; i < zoneCnt; i++) {
            if (enemy2[i] == 0) {
                continue;
            }

            boolean before = checkBefore(enemy2, i);
            boolean after = checkAfter(enemy2, i);
        }
    }

    private static boolean checkBefore(int[] enemy, int i) {
        if (i == 0) {
            if (enemy[zoneCnt-1] == 0 || enemy[i] + enemy[zoneCnt-1] > rangerCnt) {
                return true;
            }
        } else {
            if (enemy[i-1] == 0 || enemy[i] + enemy[i-1] > rangerCnt) {
                return true;
            }
        }

        return false;
    }

    private static boolean checkAfter(int[] enemy, int i) {
        if (i == zoneCnt-1) {
            if (enemy[0] == 0 || enemy[i] + enemy[0] > rangerCnt) {
                return true;
            }
        } else {
            if (enemy[i+1] == 0 || enemy[i] + enemy[i+1] > rangerCnt) {
                return true;
            }
        }

        return false;
    }


//    private static boolean checkover(int[] enemy, int i){
//
//    }
}

