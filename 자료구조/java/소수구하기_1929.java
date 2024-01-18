import java.util.Scanner;

public class 소수구하기_1929 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int min = sc.nextInt();
        int max =  sc.nextInt();

        int[] arr = new int[max+1];

        for(int i = 2; i < arr.length; i++){
            arr[i] = i;
        }



        for(int i = 2; i <= Math.sqrt(max); i++){
            for(int j = i + i; j <= max; j = j + i){
                arr[j] = 0;
            }
        }


        for(int i = min; i <= max; i++){

            if(arr[i] != 0){
                System.out.println(arr[i]);
            }
        }

//        for(int i = 0; i<arr.length; i++){
//            System.out.println(arr[i]);
//        }
    }
}
