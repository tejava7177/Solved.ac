//
//  main.c
//  10818
//
//  Created by 심주흔 on 2022/03/20.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int user;
    int *num;
    int max, min;

    scanf("%d" , &user);
    num = (int *)malloc(sizeof(int) * user);
    
    scanf("%d", &num[0]);
    max = num[0];
    min = num[0];
    
    for(int i=1; i<user; i++){
        scanf("%d" , &num[i]);
        if(max <= num[i]){
            max = num[i];
        }
        else if(min >= num[i]){
            min = num[i];
        }
    }
    
    printf("%d %d" , min, max);
    
    free(num);
    return 0;
}
