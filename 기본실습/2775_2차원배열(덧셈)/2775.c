//
//  main.c
//  2775
//
//  Created by 심주흔 on 2022/05/10.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int testCase;           //실행 반복 횟수
    int floor, address;     //층, 호수
    int arr[100][100] = { 0 };  //이차원 배열 생성 및 초기화
    
    for(int j = 1; j<=14; j++){
        arr[0][j] = j;          //0층을 먼저 만듦.
    }
    
    //해당 호수의 인원을 정하는 공식
    for(int i = 1; i<15; i++){
        for(int j = 1; j<15; j++){
            //전 층의 호수에 살고 있는 인원까지 더함.
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    
    //실행
    scanf("%d" , &testCase);
    for(int i = 0; i<testCase; i++){
        scanf("%d" , &floor);
        scanf("%d" , &address);
        printf("%d\n" , arr[floor][address]);   //해당 층, 호수 인원 출력
    }
    
    return 0;
}
