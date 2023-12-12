//
//  main.c
//  16394
//
//  Created by 심주흔 on 2022/03/06.
//

#include <stdio.h>
#include <math.h>

int main(void){
    
    int var;
    scanf("%d" , &var);
    
    if(1946 <= var && var <= pow(10, 6)){
        printf("%d\n" , var - 1946);
    }
    
    else
        return 0;
    
    return 0;
}
