//
//  main.c
//  2884
//
//  Created by 심주흔 on 2022/04/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int hour, min;
    
    scanf("%d %d" , &hour, &min);
    
    min -=45;
    
    if(min < 0 ){
        min += 60;
        hour--;
        if(hour < 0 ){
            hour += 24;
        }
    }
    
    printf("%d %d" , hour, min);
    
    return 0;
}
