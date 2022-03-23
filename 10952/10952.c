//
//  main.c
//  10952
//
//  Created by 심주흔 on 2022/03/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1, num2;
    int count = 0;
    //int *arr;
    
    while(1){
        scanf("%d %d" , &num1, &num2);
        count++;
        if(num1 == 0 && num2 == 0){
            return 0;
        }
        else
            printf("%d\n" , num1 + num2);
    }

    return 0;
}
