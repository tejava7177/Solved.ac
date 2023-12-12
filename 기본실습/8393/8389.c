//
//  8389.c
//  testScore
//
//  Created by 심주흔 on 2022/03/05.
//

#include <stdio.h>
#include <math.h>

int main(void){
    
    int num = 0;
    int total = 0;
    scanf("%d" , &num);
    
    if(1 <= num && num <= pow(10, 4)){
        for(int i = 1; i<=num; i++){
            total = total + i;
        }
        printf("%d\n" , total);
    
    }
    else
        return 0;
    
    return 0;
}
