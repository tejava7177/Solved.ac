//
//  main.c
//  10869
//
//  Created by 심주흔 on 2022/03/08.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
   
    int a, b;
    
    scanf("%d %d", &a, &b);
    if((1<=a && 1<=b) && (a<=pow(10,4)&&b<=pow(10,4)))
        printf("%d\n%d\n%d\n%d\n%d\n" , a+b , a-b , a*b, a/b, a%b);
    
    return 0;
}
