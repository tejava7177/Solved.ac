//
//  main.c
//  2438
//
//  Created by 심주흔 on 2022/03/10.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d" , &num);
    
    for(int j = 0; j<num; j++){
        for(int i = 1; i<=j+1; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
