//
//  main.c
//  2798
//
//  Created by 심주흔 on 2022/04/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a, b, v;
    int i = 1;
    int result = 0;
    
    scanf("%d %d %d", &a, &b, &v);
    
    while(result <= v){
        result += a;
        if(result >= v){
            printf("%d\n" , i);
            return 0;
        }
        result -= b;
        i++;
    }
    return 0;
}
