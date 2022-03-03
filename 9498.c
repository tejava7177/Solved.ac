//
//  main.c
//  testScore
//
//  Created by 심주흔 on 2022/03/03.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num;
    
    scanf("%d" , &num);
    
    if(num < 0 || num > 100){
        printf("error\n");
        return 0;
    }
    
    else if(num >= 90 && num <= 100){
        printf("A\n");
    }
    else if(num <= 89 && num >= 80){
        printf("B\n");
    }
    else if(num <= 79 && num >= 70){
        printf("C\n");
    }
    else if(num <= 69 && num >= 60){
        printf("D\n");
    }
    else
        printf("F\n");
    
    return 0;
}
