import java.util.Scanner;

public class 손익분기점_1712 {
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//
//        double a = sc.nextDouble();
//        double b = sc.nextDouble();
//        double c = sc.nextDouble();
//
//        int i = 1;
//
//        if(b >= c ){
//            System.out.println(-1);
//            return;
//        }
//
//        while(c*i < (a+(b*i))){
//            i++;
//        }
//
//        System.out.println(i+1);
//        return;
//    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int fixedCost = sc.nextInt();
        int variableCost = sc.nextInt();
        int price = sc.nextInt();

        if (variableCost >= price) {
            System.out.println(-1);
            return;
        }

        int breakEvenPoint = fixedCost / (price - variableCost) + 1;
        System.out.println(breakEvenPoint);
    }

}
