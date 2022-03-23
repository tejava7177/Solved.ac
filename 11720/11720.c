//
//  main.c
//  11720
//
//  Created by 심주흔 on 2022/03/23.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int num;
    int *arr;
    int sum = 0;
    
    scanf("%d" , &num);
    arr = (int *)malloc(sizeof(int) * num);
    
    for(int i = 0; i<num; i++){
        scanf("%1d" , &arr[i]);                 //공백없이 정수를 차례대로 배열에 저장하는 법
        sum += arr[i];
    }

    printf("%d" , sum);
    
    return 0;
}
