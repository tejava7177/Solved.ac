//
//  main.c
//  1085
//
//  Created by 심주흔 on 2022/04/14.
//

#include <stdio.h>

int findResult(int a, int b, int c, int d){
    
    if(a <= b && a <= c && a <= d){
        return a;
    }
    
    else if(b <= a && b <= c && b <= d){
        return b;
    }
    
    else if(c <= a && c <= b && c <= d){
        return c;
    }
    
    else
        return d;
}



int main(int argc, const char * argv[]) {
    
    int x, y, w, h;
    int c, d;
    int result;
    
    scanf("%d %d %d %d" , &x, &y, &w, &h);
    
    c = h - y;
    d = w - x;
    
    result = findResult(x, y, c, d);
    
    printf("%d\n" , result);
    
    return 0;
}
