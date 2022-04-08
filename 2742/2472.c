//
//  main.c
//  2742
//
//  Created by 심주흔 on 2022/04/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num;
    
    scanf("%d" , &num);
    
    for(int i = num; i > 0; i--){
        printf("%d\n" , i);
    }
    
    
    return 0;
}
