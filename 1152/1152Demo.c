//
//  1152Demo.c
//  1152
//
//  Created by 심주흔 on 2022/04/11.
//


#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int count = 0;
    char buf[100];
    char seps[] = " ";
    char *token;
    
    
    gets(buf);
    token = strtok(buf, seps);
    
    while(token != NULL){
        token = strtok(NULL, seps);
        count++;
    }
    
    printf("%d\n" , count);
    return 0;
}

