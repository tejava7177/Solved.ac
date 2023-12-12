//
//  main.c
//  4253
//
//  Created by 심주흔 on 2022/04/14.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    long a, b, c;

    while(1){
        scanf("%ld %ld %ld" , &a, &b, &c);
        a = pow(a, 2);
        b = pow(b, 2);
        c = pow(c, 2);
    
        //sum = a + b;
        
        if(a == 0 && b ==0 && c == 0){
            return 0;
        }
        
        else if((a + b == c) || (a + c == b) || (b + c == a)){
            printf("right\n");
        }
        
        else{
            printf("wrong\n");
        }
    }
    return 0;
}
