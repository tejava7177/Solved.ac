//
//  main.c
//  1152
//
//  Created by 심주흔 on 2022/04/11.
//


#include <stdio.h>
#include <string.h>

int main() {
    char input[1000001];
    scanf("%[^\n]", input);             //\n이 나올 때깢 입력 받는다.
    int len = strlen(input), count=0;
    if(len == 1 && input[0] == ' '){
        printf("0");
        return 0;
    }
    for(int i=1; i<len-1; i++) {
        if(input[i] == ' ')
            count++;
    }
    printf("%d", count+1);
}
