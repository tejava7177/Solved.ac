//
//  main.c
//  1330
//
//  Created by 심주흔 on 2022/03/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1, num2;
    
    scanf("%d %d" , &num1, &num2);
    
    if(num1 == num2){
        printf("==\n");
    }
    else if(num1 < num2){
        printf("<\n");
    }
    else
        printf(">\n");
    return 0;
}
