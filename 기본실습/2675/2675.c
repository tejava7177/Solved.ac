//
//  main.c
//  2675
//
//  Created by 심주흔 on 2022/04/07.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int num;
    int loop;
    char word[20] = {0};
    
    scanf("%d" , &num);
    
    
    for(int i = 0; i<num; i++){
        scanf("%d %s" , &loop, word);
        for(int j = 0; j < strlen(word); j++){
            for(int k = 0; k<loop; k++){
                printf("%c" , word[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
