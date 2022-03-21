//
//  main.c
//  2439
//
//  Created by 심주흔 on 2022/03/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int i = 0, j = 0 , k=0;
    
    scanf("%d" , &num);
    
    for(i=1; i<=num; i++){
        for(j = 1; j<=num-i; j++){                  //여기가 뽀인트다!
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
