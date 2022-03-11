//
//  main.c
//  2753
//
//  Created by 심주흔 on 2022/03/11.
//

#include <stdio.h>

int main(void){
    
    int year = 0;
    //int result = 0;
    
    //printf("Type year : ");
    scanf("%d" , &year);
    
    //result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    //printf("result = %d\n", result);               //1이면 윤년 , 0이면 평년
    
    if((((year % 4 == 0) && (year % 100 != 0))) || (year % 400 == 0))
        printf("1\n");
    else
        printf("0\n");
     
    return 0;
}
