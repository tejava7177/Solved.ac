//
//  main.c
//  2442
//
//  Created by 심주흔 on 2022/05/12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int loop;
    int tmp;
    
    scanf("%d", &loop);
    tmp = loop;
    
    for(int i = 1; i<=loop; i++){
        for(int k = tmp-1; k > 0; k--){
            printf(" ");
        }
        for(int j = 0; j < (i * 2) - 1; j++){
            printf("*");
        }
        tmp--;
        printf("\n");
    }
    return 0;
}
