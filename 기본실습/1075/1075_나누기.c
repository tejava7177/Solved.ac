//
//  main.c
//  1075
//
//  Created by 심주흔 on 2022/05/16.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int div;
    
    
    scanf("%d %d", &num, &div);
    
    num = num / 100;
    num *= 100;
    
    for(int i = 0; i < 100; i++){
        if(num % div == 0){
            printf("%02d\n", i);
            break;
        }
        else
            num++;
    }
    
    return 0;
}
