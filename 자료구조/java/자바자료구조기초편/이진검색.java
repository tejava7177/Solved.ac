package 자바자료구조기초편;

import java.util.Scanner;

import static java.util.Arrays.sort;

public class 이진검색 {

    public static int binSearch(int[] x, int key){

        int start = 0;
        int end = x.length-1;



        do{
            int center = (start + end) / 2;
            if(x[center] == key){
                return center;
            }
            else if(x[center] < key){
                start = center + 1;
            }
            else
                end = center - 1;
        }while(start <= end);


        return -1;
    }



    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("요솟수 : ");
        int num = sc.nextInt();

        int[] x = new int[num];


        for(int i = 0; i < num; i++){
            System.out.print("x[" + i + " ] :");
            x[i] = sc.nextInt();
        }
        sort(x);

        System.out.print("검색할 값 : ");
        int key = sc.nextInt();


        int index = binSearch(x, key);

        if(index == -1){
            System.out.println("해당 값이 없습니다");
        }
        else
            System.out.println(key + "은 x[" + index + "]에 있습니다.");

    }
}
