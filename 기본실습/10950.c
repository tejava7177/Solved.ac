//
//  10950.c
//  testScore
//
//  Created by 심주흔 on 2022/03/03.
//


#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int i, A, B;
    int caseNum;
    int *sum;
    scanf("%d" , &caseNum);
    
    sum = (int *)malloc(sizeof(int) * caseNum);
    
    for(i = 0; i<caseNum; i++){
        scanf("%d %d", &A, &B);
        
        if(A > 0 && B < 10){
            sum[i] = A + B;
        }
        else{
            printf("error\n");
            return 0;
        }
    }
    
    for(i = 0; i<caseNum; i++){
        printf("%d\n" , sum[i]);
    }
    
    free(sum);
    return 0;
}




