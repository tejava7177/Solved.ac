//
//  main.c
//  8958
//
//  Created by 심주흔 on 2022/03/07.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int user;
    int len;
    int point;
    int total;
    char score[80] = {0};
    
    scanf("%d" , &user);
    
    
    for(int j = 0; j<user; j++){
        scanf("%s" , score);
        len = strlen(score);
        point = 0;
        total = 0;
        for(int i = 0; i<len; i++){
            if(score[i] == 'O'){
                point++;
                total = total + point;
            }
            else if(score[i] == 'X')
                point = 0;
        }
        printf("%d\n" , total);
    }
    
    
    return 0;
}
